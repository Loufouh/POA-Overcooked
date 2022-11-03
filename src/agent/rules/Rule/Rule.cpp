
#include "Rule.h"
#include <iostream>

namespace agent {
    namespace rules {
        Rule::Rule(Condition condition, Action action) : condition(condition), action(action) {}

        bool Rule::apply() 
        {
            std::cout << "there\n";
            if(condition.isVerified()) 
            {
                action.execute();
                return true;
            }
            return false;
        }
    }
}