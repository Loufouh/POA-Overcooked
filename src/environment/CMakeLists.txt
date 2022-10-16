add_library(
        environment
        objects/OrderList/OrderList.cpp objects/OrderList/OrderList.h
        objects/Machine/Machine.cpp objects/Machine/Machine.h
        objects/Box/Box.cpp objects/Box/Box.h
        objects/Table/Table.cpp objects/Table/Table.h
        objects/Plate/Plate.cpp objects/Plate/Plate.h
        Environment/Environment.cpp Environment/Environment.h
        Environment/Environment.cpp Environment/Environment.h
        Controller/Controller.cpp Controller/Controller.h
)
target_include_directories(
        environment PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
        "${PROJECT_SOURCE_DIR}/src/environment"
)