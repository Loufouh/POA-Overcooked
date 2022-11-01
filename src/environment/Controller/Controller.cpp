#include "Controller.h"
#include "environment/Environment/Environment.h"
#include <iostream>
#include <algorithm>
#include <climits>

namespace environment {
    Controller *Controller::instance_ptr = nullptr;

    Controller::Controller() {}

    void printUserInputs()
    {
        std::cout << "Input format : [object] [state]\n\n"
                  << "? : print this\n"
                  << "nothing : do nothing\n"
                  << "quit : stop the program\n\n"
                  << "[object]                          - [state]\n"
                  << "orderlist                         - { orders, noOrders }\n"
                  << "pan | frier                       - { free, cooking, ready, problem }\n"
                  << "steaksBox | friesBox | platesBox  - { empty, notEmpty }\n"
                  << "table                             - { hasPlate, hasNoPlate }\n"
                  << "plate                             - { empty, hasOnlySteak, hasOnlyFries, ready }\n\n";
    }

    void errUserInputs( bool isObject, std::string s )
    {
        std::cout << ((isObject)?("Object"):("State")) << " " << s << " not recognized\n"
                  << "Try typing ? for help\n\n";
    }

    void Controller::UserInputs( int& quit )
    {
        environment::Environment& env = *Environment::getInstance_ptr();
        retry : 
        std::cout << "\n\nWhat would you like to modify in the env. ?\n";

        std::string object;
        std::string state;

        // flushes cin
        std::cin.clear();
        std::cout << "object -> ";
        std::getline(std::cin, object);
        transform(object.begin(), object.end(), object.begin(), ::tolower);

        if( object == "?" ) { printUserInputs(); goto retry; }
        if( object == "nothing" ) return;
        if( object == "quit" ) { quit = 1; return; }

        // std::cin >> state;
        std::cout << "state -> ";
        std::getline(std::cin, state);
        transform(state.begin(), state.end(), state.begin(), ::tolower);

        if( object == "orderlist" )
        {
            if( state == "orders" )         env.orderList.setOrders();
            else if( state == "noorders" )  env.orderList.setNoOrders();
            else 
            {
                errUserInputs( false, state ); 
                goto retry;
            }
        }  

        else if( object == "pan" || object == "frier" )
        {
            Machine* machine;

            if( object == "pan" )     machine = &env.pan;
            if( object == "frier" )   machine = &env.frier;

            if( state == "free" )          machine->setFree();
            else if( state == "cooking" )  machine->setCooking();
            else if( state == "ready" )    machine->setReady();
            else if( state == "problem" )  machine->setProblem();
            else 
            {
                errUserInputs( false, state ); 
                goto retry;
            }
        }

        else if( object == "steaksbox" || object == "friesbox" || object == "platesbox" )
        {
            Box* box;

            if( object == "steaksbox" )  box = &env.steaksBox;
            if( object == "friesbox"  )  box = &env.friesBox;
            if( object == "platesbox" )  box = &env.platesBox;

            if( state == "empty" )          box->setEmpty();
            else if( state == "notempy" )   box->setNotEmpty();
            else 
            {
                errUserInputs( false, state ); 
                goto retry;
            }
        }

        else if( object == "table" )
        {
            if( state == "plate" )         env.table.setPlate();
            else if( state == "noplate" )  env.table.setNoPlate();
            else 
            {
                errUserInputs( false, state ); 
                goto retry;
            }
        }

        else if( object == "plate" )
        {
            if( state == "empty" )           env.plate.setEmpty();
            else if( state == "steakonly" )  env.plate.setSteakOnly();
            else if( state == "friesonly" )  env.plate.setFrierOnly();
            else if( state == "ready" )      env.plate.setReady();
            else 
            {
                errUserInputs( false, state ); 
                goto retry;
            }
        }

        else 
        {
            errUserInputs( true, object ); 
            goto retry;
        }

    }

    Controller *Controller::getInstance_ptr() {
        if(instance_ptr == nullptr) {
            instance_ptr = new Controller();
        }

        return instance_ptr;
    }
    
    void Controller::cookSteak(){ Environment::getInstance_ptr()->pan.state = environment::objects::MachineState::cooking;}
    
    void Controller::cookFries() {Environment::getInstance_ptr()->frier.state = environment::objects::MachineState::cooking;}
    
    void Controller::putPlateOnTable() {
        Environment::getInstance_ptr()->plate.state =  environment::objects::PlateState::empty;
        Environment::getInstance_ptr()->table.state = environment::objects::TableState::hasPlate;
    }
    
    void Controller::garnishSteak() {Environment::getInstance_ptr()->plate.state = environment::objects::PlateState::steakOnly;}
    
    void Controller::garnishFries() {Environment::getInstance_ptr()->plate.state = environment::objects::PlateState::friesOnly; }
    
    void Controller::ring () {Environment::getInstance_ptr()->table.state = environment::objects::TableState::hasNoPlate;}
}
