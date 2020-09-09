#pragma once
#include "database.h"
#include "comparison.h"
#include <stdexcept>

class Node
{
public:
	virtual bool Evaluate(const Date& date, const std::string& event) const = 0;
};

template <class T>
bool compare(Comparison cmp, const T& first, const T& second) {
    switch (cmp) {
    case Comparison::Less:
        return first < second;
    case Comparison::LessOrEqual:
        return first <= second;
    case Comparison::Greater:
        return first > second;
    case Comparison::GreaterOrEqual:
        return first >= second;
    case Comparison::Equal:
        return first == second;
    case Comparison::NotEqual:
        return first != second;
    }
    throw std::invalid_argument("Invalid comparison argument");
}