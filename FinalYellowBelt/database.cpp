#include "database.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <tuple>


void Database::Add(const Date& date, const std::string& event)

{
	if (event != "") {

		auto iter = events.find(date);

		if (iter != events.end()) { events[date].emplace_back(event); }

		else { std::vector<std::string> ev2 = { event }; events[date] = ev2; }//else { events[date] = {event};}

	};


}

bool Database::DeleteEvent(const Date& date, const std::string& event)
{

	auto iter = events.find(date);

	if (iter != events.end()) {

		if (std::count(events[date].begin(), events[date].end(), event)
			/*			events[date].count(event) */ != 0) {
			std::cout << "Deleted successfully" << std::endl;

			auto it = find(events[date].begin(), events[date].end(), event);

			events[date].erase(it);

			if (events[date].size() == 0) { events.erase(iter); };

			return true;
		}
	};

	std::cout << "Event not found" << std::endl; return false;

}

//void Database::DeleteDate(const Date& date)
//
//{
//
//	int rez;
//
//	auto iter = events.find(date);
//
//	if (iter != events.end()) { rez = events[date].size(); events.erase(iter); }
//
//	else { rez = 0; }
//
//	std::cout << "Deleted " << rez << " events" << std::endl;
//
//}

void Database::Find(const Date& date) const
{
	std::vector<std::string> event;

	if (events.count(date) > 0) {

		event = events.at(date);
	}

	for (auto a : event)

		std::cout << a << std::endl;

}

void Database::Print(std::ostream& os) const
{
	for (auto it : events) {
		for (auto it2 : it.second)
		{

			os << std::setw(4) << std::setfill('0') << it.first.GetYear();

			os << "-";

			os << std::setw(2) << std::setfill('0') << it.first.GetMonth();

			os << "-";

			os << std::setw(2) << std::setfill('0') << it.first.GetDay() << " ";

			os << it2 << std::endl;

		}
	}

}

std::string Database::Last(const Date& date)
{
	auto iter = std::find_if(events.begin(), events.end(), 
		[&date](const std::pair<Date, std::vector<std::string>>& p) 
		{
			return date == p.first; 
		});

	std::ostringstream os;

	if (iter != events.begin()/* && iter != events.end()*/)
	{
		--iter;
		os << iter->first << ' ' << iter->second[iter->second.size() - 1];

		return os.str();
	}

	os << "No entries";

	return os.str();

}

std::string parseSet(const Date& date)
{

		std::stringstream ss;
		//std::sstreamstring ss;
		ss << std::setw(4) << std::setfill('0') << date.GetYear();

		ss << "-";

		ss << std::setw(2) << std::setfill('0') << date.GetMonth();

		ss << "-";

		ss << std::setw(2) << std::setfill('0') << date.GetDay() << " ";

		return ss.str();

}


bool operator==(const std::pair<Date, std::vector<std::string>>& first,
	const std::pair<Date, std::vector<std::string> >& second)
{
	if (!(first.first == second.first))
		return false;

	if (first.second != second.second)
		return false;
	return true;
}

std::ostream& operator<<(std::ostream& os, const std::pair<std::string, std::string>& p)
{
	return os << p.first  << p.second;
}