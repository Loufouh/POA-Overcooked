
#ifndef POA_OVERCOOKED_PLATE_H
#define POA_OVERCOOKED_PLATE_H

namespace environment {
    enum PlateState {
        empty,
        steackOnly,
        friesOnly,
        ready
    };

    class Plate {
    public:
        PlateState state;

        Plate();
    };

} // environment

#endif //POA_OVERCOOKED_PLATE_H
