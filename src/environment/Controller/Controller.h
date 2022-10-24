#include "environement/Environement/Environement.h"
#ifndef POA_OVERCOOKED_CONTROLLER_H
#define POA_OVERCOOKED_CONTROLLER_H

namespace environment {

    class Controller {
    private:
        static Controller *instance_ptr;
        Controller();
    public:
        static Controller *getInstance_ptr();
        void update();
        void cookSteak();
        void cookFries();
        void putPlateOnTable();
        void garnishSteak();
        void garnishFries();
        void ring();
        
    };
}

#endif //POA_OVERCOOKED_CONTROLLER_H
