
#ifndef POA_OVERCOOKED_CONDITION_H
#define POA_OVERCOOKED_CONDITION_H
#include <iostream>

namespace agent {
    namespace rules {

        class Condition {
        public:
            virtual bool isVerified() {std::cout << "not redefined\n";return false;};
        };

    }
}

#endif //POA_OVERCOOKED_CONDITION_H
