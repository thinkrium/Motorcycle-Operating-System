//
// Created by thomedy on 1/31/23.
//

#ifndef APPLICATION_MOTOR_H
#define APPLICATION_MOTOR_H

#include <pigpio.h>

namespace Modules {
    class Motor {

    public:
        Motor();
        void Run();
    };

}
#endif //APPLICATION_MOTOR_H
