#ifndef PHASE_H
#define PHASE_H

#include "Roll.h"
#include <iostream>

enum class RollOutcome { natural, craps, point, seven_out, nopoint };

class Phase {
public:
    virtual RollOutcome get_outcome(Roll* roll) = 0;  // Pure virtual function
    virtual ~Phase() {}
};

#endif
