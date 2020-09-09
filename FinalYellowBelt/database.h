#pragma once
#include "date.h"
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>

std::string parseSet(const Date& date);

class Database {

public:

	void Add(const Date&, const std::string&);

	bool DeleteEvent(const Date&, const std::string&);

	template<typename pred>
	int RemoveIf(pred predicant)
	{
		int n = 0;
		std::vector<Date> clean;
		for (auto& item : events) {
			//item = [date, events]

			n += deleteEvent(item.first, item.second, predicant);

			if (vectorEmpty(item.second)) {
				clean.push_back(item.first);
			}
		}
		for (const auto& date : clean) {
			events.erase(date);
		}
		return n;
	}

	template<class Predicate>
	std::vector<std::pair<std::string, std::string>> FindIf(Predicate p) const {
		std::vector<std::pair<std::string, std::string>> answer;
		//std::string str;
		for (const auto& item : events) {
			auto events = item.second;
			for (const auto& event : events) {
				if (p(item.first, event)) {
					answer.emplace_back(parseSet(item.first), event);
				}
			}
		}

		return answer;
	}

	void Find(const Date&) const;

	void Print(std::ostream& os) const;

	std::string Last(const Date& is);

private:

	template<typename pred>
	int deleteEvent(const Date& date, std::vector<std::string>& vec, pred predicate)
	{
		auto it = std::stable_partition(vec.begin(), vec.end(), [&](const std::string& value) {
			return !predicate(date, value);
			});

		if (it == vec.end()) {
			return 0;
		}
		int count = 0;
		for (auto it_next = it; it_next != vec.end(); it_next++) {
			//vec.erase(*it_next);
			count++;
		}
		vec.erase(it, vec.end());
		return count;
	}
	
	bool vectorEmpty(const std::vector < std::string>& vec)
	{
		return vec.empty();
	}

	std::map<Date, std::vector<std::string> > events;

};


bool operator==(const std::pair<Date, std::vector<std::string>>& first,
	const std::pair<Date, std::vector<std::string> >& second);

std::ostream& operator<<(std::ostream& os, const std::pair<std::string, std::string>& p);

