#include "database.h"

void Database::Add(const Date& date, const std::string& event)
{
	auto it = m_database.find(date);

	if (it != m_database.end())
	{

	}
	else
	{
		m_database[date].push_back(auto(event));
	}
}
