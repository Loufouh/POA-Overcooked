
#include "PutFrierInPlateAction.h"
#include "src/environment/Controller/Controller.h"
#include "iostream"

namespace agent {
    namespace rules {
        void PutFrierInPlateAction::execute() {
            environment::Controller &controller = *environment::Controller::getInstance_ptr();
            controller.garnishFries();

            std::cout << "Plate is granished with fries !" << std::endl;
        }
    } // agent
} // rules