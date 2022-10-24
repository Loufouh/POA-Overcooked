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
    void cookSteak(){ Environment::getInstance_ptr()->pan.state = environment::objects::MachineState::cooking;}
    
    void cookFries() {Environment::getInstance_ptr()->frier.state = environment::objects::MachineState::cooking;}
    
    void putPlateOnTable() {
        Environment::getInstance_ptr()->plate.state =  environment::objects::PlateState::empty;
        Environment::getInstance_ptr()->table.state = environment::objects::TableState::hasPlate;
    }
    
    void garnishSteak() {Environment::getInstance_ptr()->plate.state = environment::objects::PlateState::steakOnly;}
    
    void garnishFries() {Environment::getInstance_ptr()->plate.state = environment::objects::PlateState::friesOnly; }
    
    void ring (){Environment::getInstance_ptr()->table.state = environment::objects::TableState::hasNoPlate;}
    
    void update() {
        
    }
}
