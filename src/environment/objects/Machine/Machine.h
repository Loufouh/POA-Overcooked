
#ifndef POA_OVERCOOKED_MACHINE_H
#define POA_OVERCOOKED_MACHINE_H

namespace environment {
    namespace objects {
        enum class MachineState {
            free,
            cooking,
            ready,
            hasProblem
        };

        class Machine {
        public:
            MachineState state;

            Machine();

            bool isFree();

            bool isCooking();

            bool isReady();

            bool hasProblem();
        };
    }
}

#endif //POA_OVERCOOKED_MACHINE_H
