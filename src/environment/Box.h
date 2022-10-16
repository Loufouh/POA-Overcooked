
#ifndef POA_OVERCOOKED_BOX_H
#define POA_OVERCOOKED_BOX_H

namespace environment {
    enum class BoxState {
        empty,
        notEmpty
    };

    class Box {
    public:
        BoxState state;

        Box();

        bool isEmpty();
    };

} // environment

#endif //POA_OVERCOOKED_BOX_H
