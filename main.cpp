#include "main.h"
#include "Global.h"

namespace fs = std::filesystem;
std::string path = "C:\\Users\\Mihai Ciorobitca\\Desktop\\";

bool check_table(std::string database_name, std::string table_name)
{
	database_name += ".db";
	sqlite3* db = NULL;
	sqlite3_open((path + database_name).c_str(), &db);
	std::string query = "SELECT * FROM " + table_name;
	int answer = sqlite3_exec(db, query.c_str(), NULL, NULL, NULL);
	if (answer == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool check_file(std::string file_name)
{
	if (fs::exists(path + file_name + ".db")) 
	{
		return true;
	}
	else
	{
		return false;
	}
}

void create_file(std::string database_name) 
{
    database_name += ".db";
	sqlite3* db = NULL;
	sqlite3_open((path+database_name).c_str(), &db);
	sqlite3_close(db);
}

void delete_file(std::string database_name)
{
	database_name += ".db";
	fs::remove((path+database_name).c_str());
}

void create_table_function(std::string database_name, std::string table_name)
{
	sqlite3* db;
	database_name += ".db";
	sqlite3_open((path + database_name).c_str(), &db);
	sqlite3_exec(db, ("drop table " + table_name).c_str(), NULL, NULL, NULL);
	std::string query = "CREATE TABLE " + table_name + "(";
	for (auto iterator = Global::data->begin(); iterator != Global::data->end(); iterator++)
	{
		query += iterator->first + " " + iterator->second;
		if (iterator != Global::data->end() - 1)
		{
			query += ",";
		}
	}
	query += ");";
	sqlite3_exec(db, query.c_str(), NULL, NULL, NULL);
	sqlite3_close(db);
}

void delete_table_function(std::string database_name, std::string table_name)
{
	sqlite3* db;
	database_name += ".db";
	sqlite3_open((path+database_name).c_str(), &db);
	std::string query = "DROP TABLE " + table_name;
	sqlite3_exec(db, query.c_str(), NULL, NULL, NULL);
	sqlite3_close(db);
}

int select_callback(void* p_data, int num_fields, char** p_fields, char** p_col_names)
{
	Records* records = static_cast<Records*>(p_data);
	try {
		records->emplace_back(p_fields, p_fields + num_fields);
	}
	catch (...) {
		return 1;
	}
	return 0;
}

Records select_query(sqlite3* db, std::string query)
{
	Records records;
	sqlite3_exec(db, query.c_str(), select_callback, &records, NULL);
	return records;
}

void get_data_table(std::string database_name, std::string table_name)
{
	sqlite3* db;
	database_name += ".db";
	sqlite3_open((path + database_name).c_str(), &db);
	std::string query = "SELECT * FROM " + table_name;
	Records records = select_query(db, query);
	sqlite3_close(db);
}