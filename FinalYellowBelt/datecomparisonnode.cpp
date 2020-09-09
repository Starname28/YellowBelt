#include "datecomparisonnode.h"

bool DateComparisonNode::Evaluate(const Date& date, const std::string& event) const
{
    return compare(m_cmp, date, m_date);
}
