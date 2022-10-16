
#include "Environment.h"

namespace environment {
    Environment *Environment::instance_ptr = nullptr;

    Environment *Environment::getInstance_ptr() {
        if(instance_ptr == nullptr) {
            instance_ptr = new Environment();
        }

        return instance_ptr;
    }

    Environment::Environment() {}
} // environment