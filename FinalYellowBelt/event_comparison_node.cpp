#include "event_comparison_node.h"

bool EventComparisonNode::Evaluate(const Date& date, const std::string& event) const
{
    return compare(m_cmp, event, m_event);;
}
