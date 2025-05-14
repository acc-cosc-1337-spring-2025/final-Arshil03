#ifndef DIE_H
#define DIE_H

#include <cstdlib>
#include <ctime>

class Die {
public:
    Die() : sides(6) {}
    int roll();

private:
    int sides;
};

#endif
