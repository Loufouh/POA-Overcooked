
#ifndef POA_OVERCOOKED_CONTROLLER_H
#define POA_OVERCOOKED_CONTROLLER_H

namespace environment {

    class Controller {
    private:
        static Controller *instance_ptr;
        Controller();
    public:
        static Controller *getInstance_ptr();
    };
}

#endif //POA_OVERCOOKED_CONTROLLER_H
