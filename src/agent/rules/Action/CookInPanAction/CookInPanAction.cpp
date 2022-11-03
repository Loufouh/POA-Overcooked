#include "CookInPanAction.h"
#include "environment/Controller/Controller.h"
#include <iostream>

namespace agent {
    namespace rules {
        void CookInPanAction::execute() {
            environment::Controller &controller = *environment::Controller::getInstance_ptr();
            controller.cookSteak();

            std::cout << "The steak is now cooking !" << std::endl;
        }
    } // agent
} // rules