#pragma once
#include "date.h"
#include "node.h"

#include <map>
#include <vector>
#include <string>

class Database
{
public:
	void Add(const Date& date, const std::string& event);
	void Print(std::ostream& os);

private:
	std::map<Date, std::vector<std::string>> m_database;
};

