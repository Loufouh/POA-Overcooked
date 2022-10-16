
#ifndef POA_OVERCOOKED_BOX_H
#define POA_OVERCOOKED_BOX_H

namespace environment {
    enum BoxState {
        empty,
        notEmpty
    };

    class Box {
    public:
        BoxState state;

        Box();
    };

} // environment

#endif //POA_OVERCOOKED_BOX_H
