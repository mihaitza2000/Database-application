#pragma once
#include "main.h"

ref class Global
{
	public: static bool configured;
	public: static std::vector<std::pair<std::string, std::string>>* data = new std::vector<std::pair<std::string, std::string>>;
	public: array<System::Int32^>^ dim = gcnew array<System::Int32^>(2);
	public: static  Records *table_data = new Records;
};



