#pragma once
#include <string>

class Date {

public:

	Date();

	Date(int y, int m, int d);

	Date(const std::string&);

	int GetYear() const;

	int GetMonth() const;

	int GetDay() const;

private:

	int year;

	int month;

	int day;

};

bool operator <(const Date& d1, const Date& d2);

std::ostream& operator <<(std::ostream& os, const Date& date);

bool operator==(const Date& date_1, const Date& date_2);
bool operator>(const Date& date_1, const Date& date_2);
bool operator!=(const Date& date_1, const Date& date_2);
bool operator<=(const Date& date_1, const Date& date_2);
bool operator>=(const Date& date_1, const Date& date_2);

Date ParseDate(std::istream& is);