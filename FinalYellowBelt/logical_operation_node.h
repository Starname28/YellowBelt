#pragma once
#include "node.h"
#include <memory>

class LogicalOperationNode : public Node {
public:
    LogicalOperationNode(LogicalOperation op, std::shared_ptr<Node> left, std::shared_ptr<Node> right) :
        m_op(op), m_left(left), m_right(right) {}

    bool Evaluate(const Date& date, const std::string& event) const override;
private:
    const LogicalOperation m_op;
    const std::shared_ptr<Node> m_left;
    const std::shared_ptr<Node> m_right;
};

