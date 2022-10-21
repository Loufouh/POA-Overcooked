
#include "Rule.h"

namespace agent {
    namespace rules {
        Rule::Rule(Condition condition, Action action) : condition(condition), action(action) {}

        void Rule::apply() {
            if(condition.isVerified()) {
                action.execute();
            }
        }
    }
}