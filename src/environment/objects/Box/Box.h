
#ifndef POA_OVERCOOKED_BOX_H
#define POA_OVERCOOKED_BOX_H

namespace environment {
    namespace objects {
        enum class BoxState {
            empty,
            notEmpty
        };

        class Box {
        public:
            BoxState state;

            Box();

            bool isEmpty();
            
            void print_state();
        };
    }
}

#endif //POA_OVERCOOKED_BOX_H
