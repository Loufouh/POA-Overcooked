
#include "CookInFrierAction.h"
#include "environment/Controller/Controller.h"
#include "iostream"

namespace agent {
    namespace rules {
        void CookInFrierAction::execute() {
            environment::Controller &controller = *environment::Controller::getInstance_ptr();
            controller.cookFries();

            std::cout << "Fries are now cooking !" << std::endl;
        }
    } // agent
} // rules