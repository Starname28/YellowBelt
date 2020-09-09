#include "logical_operation_node.h"

bool LogicalOperationNode::Evaluate(const Date& date, const std::string& event) const
{
    (void)date, (void)event;
    switch (m_op)
    {
    case LogicalOperation::Or:
        return m_left->Evaluate(date, event) || m_right->Evaluate(date, event);
    case LogicalOperation::And:
        return m_left->Evaluate(date, event) && m_right->Evaluate(date, event);
    }
    throw std::invalid_argument("Invalid logical operation");;
}
