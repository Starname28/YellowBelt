#include "date.h"
#include <iostream>
#include <sstream>
#include <tuple>
#include <iomanip>



Date ParseDate(std::istream& is)
{
	std::string s_year, s_month;

	getline(is, s_year, '-');
	getline(is, s_month, '-');

	int day, month, year;
	is >> day;

	month = stoi(s_month);
	year = stoi(s_year);

	if (day < 1 || day > 31 || month < 1 || month > 12)
		throw std::invalid_argument("Invalid date: " + s_year + "-" + s_month + "-" + std::to_string(day));

	return Date(year, month, day);
}

Date::Date() : year(0), month(0), day(0)
{
}

Date::Date(int y, int m, int d) 
	:year(y), month(m), day(d)
{
}

Date::Date(const std::string& date)

{
	std::istringstream is(date);

	int y, m, d;

	is >> y;

	if (is.peek() != '-') {
		std::string error = "Wrong date format: " + date;

		throw std::invalid_argument(error);
	};

	is.ignore(1);

	is >> m;

	if (is.peek() != '-') {
		std::string error = "Wrong date format: " + date;

		throw std::invalid_argument(error);
	};



	is.ignore(1);

	is >> d;
	if (!(is)) {
		std::string error = "Month value is invalid: " + date;

		throw std::invalid_argument(error);
	};



	std::string s;
	/*if (!(is >> d)) {
	string error = "Wrong date format: " + date;

	throw invalid_argument(error);
	};*/

	is >> s;

	if (!(s == "")) {
		std::string error = "Wrong date format: " + date;

		throw std::invalid_argument(error);
	};
	if ((m < 1) || (m > 12)) {//there
		std::stringstream ss;
		ss << "Month value is invalid: ";

		ss << m;
		std::string error = ss.str();

		throw std::invalid_argument(error);
	};
	if ((d < 1) || (d > 31)) {
		std::stringstream ss; ss << "Day value is invalid: ";

		ss << d; std::string error = ss.str();

		throw std::invalid_argument(error);
	};

	year = y;

	month = m;

	day = d;

}

int Date::GetYear() const
{
	return year;
}

int Date::GetMonth() const
{
	return month;
}

int Date::GetDay() const
{
	return day;
}


bool operator <(const Date& d1, const Date& d2)

{

	if (d1.GetYear() < d2.GetYear()) { return true; }

	else if ((d1.GetYear() == d2.GetYear()) && (d1.GetMonth() < d2.GetMonth())) { return true; }

	else if ((d1.GetYear() == d2.GetYear()) && (d1.GetMonth() == d2.GetMonth())

		&& (d1.GetDay() < d2.GetDay())) {
		return true;
	}

	else { return false; }

}

bool operator==(const Date& date_1, const Date& date_2)
{
	return  (date_1.GetYear() == date_2.GetYear())
		&& (date_1.GetMonth() == date_2.GetMonth())
		&& (date_1.GetDay() == date_2.GetDay());
}

bool operator>(const Date& date_1, const Date& date_2) {
	return  std::tuple(date_1.GetYear(), date_1.GetMonth(), date_1.GetDay()) >
		    std::tuple(date_2.GetYear(), date_2.GetMonth(), date_2.GetDay());
}

bool operator!=(const Date& date_1, const Date& date_2) {
	return !(date_1 == date_2);
}

bool operator<=(const Date& date_1, const Date& date_2) {
	return (date_1 < date_2) || (date_1 == date_2);
}

bool operator>=(const Date& date_1, const Date& date_2) {
	return (date_1 > date_2) || (date_1 == date_2);
}

std::ostream& operator <<(std::ostream& os, const Date& date)
{
	os << date.GetYear() << '-' << date.GetMonth() << '-' << date.GetDay();
	return os;
}