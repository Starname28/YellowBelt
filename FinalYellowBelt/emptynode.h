#pragma once
#include "node.h"

class EmptyNode : public Node {
public:
    EmptyNode() {}
    bool Evaluate(const Date& date, const std::string& event) const override; // {
//      (void) date, (void) event;
//      return true;
//  }
private:

};
