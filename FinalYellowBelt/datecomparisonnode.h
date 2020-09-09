#pragma once
#include "node.h"

class DateComparisonNode : public Node {
public:
    DateComparisonNode(Comparison cmp, const Date& date) :
        m_cmp(cmp), m_date(date) {}
    bool Evaluate(const Date& date, const std::string& event) const override;
private:
    const Comparison m_cmp;
    const Date m_date;
};

