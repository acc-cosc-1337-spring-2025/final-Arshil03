#include "Die.h"

int Die::roll() {
    return rand() % sides + 1;
}
