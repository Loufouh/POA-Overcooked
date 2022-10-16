
#ifndef POA_OVERCOOKED_ENVIRONMENT_H
#define POA_OVERCOOKED_ENVIRONMENT_H

namespace environment {

    class Environment {
    private:
        static Environment *instance_ptr;

        Environment();
    public:
        static Environment *getInstance_ptr();
    };

} // environment

#endif //POA_OVERCOOKED_ENVIRONMENT_H
