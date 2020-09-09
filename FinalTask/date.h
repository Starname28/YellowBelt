#pragma once
#include <ostream>
#include <memory>

class Date
{
public:

	Date() : 
		m_year(1), m_month(1), m_day(1)
	{}

	Date(const int& year, const int& month, const int& day)
		: m_year(year), m_month(month), m_day(day)
	{}

	int GetYear() const;
	int GetMonth() const;
	int GetDay() const;

	std::ostream& operator<<(const Date& date);

private:
	int m_year;
	int m_month;
	int m_day;
	//std::shared_ptr<Date> ParseDate(std::istream& is);
};

