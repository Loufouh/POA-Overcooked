
#ifndef POA_OVERCOOKED_CONDITION_H
#define POA_OVERCOOKED_CONDITION_H

namespace agent {
    namespace rules {

        class Condition {
        public:
            virtual bool isVerified() {return false;};
        };

    }
}

#endif //POA_OVERCOOKED_CONDITION_H
