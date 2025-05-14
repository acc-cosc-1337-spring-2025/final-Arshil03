//#ifndef ROLL_H
#define ROLL_H

#include "Die.h"

class Roll {
public:
    Roll(Die& d1, Die& d2) : die1(d1), die2(d2), rolled_value(0) {}
    void roll_dice();
    int roll_value() const;

private:
    Die& die1;
    Die& die2;
    int rolled_value;
};

#endif
