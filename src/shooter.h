#ifndef SHOOTER_H
#define SHOOTER_H

#include "Roll.h"
#include <vector>

class Shooter {
public:
    Shooter();
    Roll* throw_dice();
    void display_rolled_values();

    ~Shooter();

private:
    std::vector<Roll*> rolls;
};

#endif
