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
    void cookSteak(){Environment::getinstance_ptr().pan.state = cooking;}
    
    void cookFries() {Environment::getinstance_ptr().frier.state = cooking;}
    
    void putPlateOnTable() {
        Environment::getinstance_ptr().plate.state = empty;
        Environment::getinstance_ptr().table.state = hasPlate;
    }
    
    void garnishSteak() {
        Environment::getinstance_ptr().plate.state = steakOnly;   
    }
    
    void garnishFries() {
        Environment::getinstance_ptr().plate.state = friesOnly;   
                    
    }
    
    void ring (){        
             Environment::getinstance_ptr().table.state = empty;
    }
    
    void update() {
        
    }
}
