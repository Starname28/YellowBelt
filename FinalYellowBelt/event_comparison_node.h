#pragma once
#include "node.h"

class EventComparisonNode : public Node {
public:
    EventComparisonNode(Comparison cmp, const std::string& event) :
        m_cmp(cmp), m_event(event) {}
    bool Evaluate(const Date& date, const std::string& event) const override;
private:
    const Comparison m_cmp;
    const std::string m_event;
};

