
#ifndef POA_OVERCOOKED_PLATE_H
#define POA_OVERCOOKED_PLATE_H

namespace environment {
    enum PlateState {
        empty,
        steakOnly,
        friesOnly,
        ready
    };

    class Plate {
    public:
        PlateState state;

        Plate();

        bool isEmpty();
        bool isReady();
    };

} // environment

#endif //POA_OVERCOOKED_PLATE_H
