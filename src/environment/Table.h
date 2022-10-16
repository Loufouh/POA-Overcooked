
#ifndef POA_OVERCOOKED_TABLE_H
#define POA_OVERCOOKED_TABLE_H

namespace environment {
    enum class TableState {
        hasPlate,
        hasNoPlate
    };

    class Table {
    public:
        TableState state;

        Table();

        bool hasPlate();
    };

} // environment

#endif //POA_OVERCOOKED_TABLE_H
