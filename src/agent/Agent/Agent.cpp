
#include "Agent.h"
#include "environment/Controller/Controller.h"
#include "environment/Environment/Environment.h"
#include <iostream>

namespace agent {
    Agent *Agent::instance_ptr = nullptr;

    bool Agent::isWaiting() {
        return state == AgentState::waiting;
    }

    bool Agent::isCooking() {
        return state == AgentState::cooking;
    }

    bool Agent::isShutdown() {
        return state == AgentState::shutdown;
    }

    void Agent::setState(AgentState newState) {
        state = newState;
    }

    Agent *Agent::getInstance_ptr() {
         if(instance_ptr == nullptr) {
            instance_ptr = new Agent();
        }

        return instance_ptr;
    }

    void Agent::print_state()
    {
        switch( state )
        {
            case AgentState::waiting : std::cout << "is waiting"; break;
            case AgentState::cooking : std::cout << "is cooking"; break;
            case AgentState::shutdown : std::cout << "has shut down"; break;
            default : std::cout << "?"; break;
        }

    }

    void Agent::print()
    {
        environment::Environment& env = *environment::Environment::getInstance_ptr();

        std::cout << "\n";
        std::cout << " Object                       | State of the object              \n";
        std::cout << " -------------------------------------------------------------";
        std::cout << " Agent                        | "; this->print_state();           std::cout << "\n";
        std::cout << " Order list                   | "; env.orderList.print_state();   std::cout << "\n";
        std::cout << " Pan                          | "; env.pan.print_state();         std::cout << "\n";
        std::cout << " Frier                        | "; env.frier.print_state();       std::cout << "\n";
        std::cout << " Steak box                    | "; env.steaksBox.print_state();   std::cout << "\n";
        std::cout << " Fries box                    | "; env.friesBox.print_state();    std::cout << "\n";
        std::cout << " Plates box                   | "; env.platesBox.print_state();   std::cout << "\n";
        std::cout << " Table                        | "; env.table.print_state();       std::cout << "\n";
        std::cout << " Plate                        | "; env.plate.print_state();       std::cout << "\n";
        std::cout << "\n";
    }

    void Agent::main_loop()
    {
        environment::Controller& controller = *environment::Controller::getInstance_ptr();
        int quit = 0;

        while( !quit && !isShutdown() )
        { 
            print();
            controller.UserInputs(quit);
            // agent.processRules(); TODO
        }

    }
}