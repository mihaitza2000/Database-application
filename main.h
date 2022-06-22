#pragma once
#include <string>
#include <iostream>
#include <filesystem>
#include "sqlite3.h"
#include <msclr\marshal_cppstd.h>
#include <vector>

using Record = std::vector<std::string>;
using Records = std::vector<Record>;

bool check_file(std::string file_name);
void create_file(std::string database_name);
void delete_file(std::string database_name);
void create_table_function(std::string database_name, std::string table_name);
void delete_table_function(std::string database_name, std::string table_name);
bool check_table(std::string database_name, std::string table_name);
void get_data_table(std::string database_name, std::string table_name);