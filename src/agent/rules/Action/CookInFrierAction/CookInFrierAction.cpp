
#include "CookInFrierAction.h"
#include "environment/Controller/Controller.h"
<<<<<<< HEAD
=======
#include "iostream"
>>>>>>> rules

namespace agent {
    namespace rules {
        void CookInFrierAction::execute() {
            environment::Controller &controller = *environment::Controller::getInstance_ptr();
            controller.cookFries();

            std::cout << "Fries are now cooking !" << std::endl;
        }
    } // agent
} // rules