#ifndef COMEOUTPHASE_H
#define COMEOUTPHASE_H

#include "Phase.h"

class ComeOutPhase : public Phase {
public:
    RollOutcome get_outcome(Roll* roll) override;
};

#endif
