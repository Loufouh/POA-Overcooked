
#include "Controller.h"

namespace environment {
    Controller *Controller::instance_ptr = nullptr;

    Controller::Controller() {}

    Controller *Controller::getInstance_ptr() {
        if(instance_ptr == nullptr) {
            instance_ptr = new Controller();
        }

        return instance_ptr;
    }
} // environment