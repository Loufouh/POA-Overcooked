
#include "PutPanInPlateAction.h"
#include "environment/Controller/Controller.h"
#include "iostream"

namespace agent {
    namespace rules {
        void PutPanInPlateAction::execute() {
            environment::Controller &controller = *environment::Controller::getInstance_ptr();
            controller.garnishSteak();

            std::cout << "Plate is garnished with a steak !" << std::endl;
        }
    } // agent
} // rules