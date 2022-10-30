
#include "CookInFrierAction.h"
#include "environment/Controller/Controller.h"

namespace agent {
    namespace rules {
        void CookInFrierAction::execute() {
            environment::Controller &controller = *environment::Controller::getInstance_ptr();
            controller.cookFries();
        }
    } // agent
} // rules