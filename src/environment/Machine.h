
#ifndef POA_OVERCOOKED_MACHINE_H
#define POA_OVERCOOKED_MACHINE_H

namespace environment {
    enum MachineState {
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
    };

} // environment

#endif //POA_OVERCOOKED_MACHINE_H
