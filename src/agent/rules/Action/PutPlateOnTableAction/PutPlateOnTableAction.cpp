
#include "PutPlateOnTableAction.h"
#include "environment/Controller/Controller.h"
#include "iostream"

namespace agent {
    namespace rules {
        void PutPlateOnTableAction::execute() {
            environment::Controller &controller = *environment::Controller::getInstance_ptr();
            controller.putPlateOnTable();

            std::cout << "Plate is now on table !" << std::endl;
        }
    } // agent
} // rules