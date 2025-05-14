#include <iostream>
#include "Die.h"
#include "Shooter.h"
#include "ComeOutPhase.h"
#include "PointPhase.h"

int main() {
    srand(time(0));

    Die die1, die2;
    Shooter shooter;

    Roll* roll = shooter.throw_dice();
    int rolled_value = roll->roll_value();

    ComeOutPhase come_out_phase;
    while (come_out_phase.get_outcome(roll) == RollOutcome::natural || come_out_phase.get_outcome(roll) == RollOutcome::craps) {
        std::cout << "Rolled: " << rolled_value << " roll again" << std::endl;
        roll = shooter.throw_dice();
        rolled_value = roll->roll_value();
    }

    std::cout << "Start of point phase: " << rolled_value << std::endl;
    std::cout << "Roll until " << rolled_value << " or 7 is rolled" << std::endl;

    int point = rolled_value;
    roll = shooter.throw_dice();

    PointPhase point_phase(point);
    while (point_phase.get_outcome(roll) != RollOutcome::seven_out && point_phase.get_outcome(roll) != RollOutcome::nopoint) {
        std::cout << "Rolled: " << roll->roll_value() << " roll again" << std::endl;
        roll = shooter.throw_dice();
    }

    std::cout << "End of point phase: " << roll->roll_value() << std::endl;

    shooter.display_rolled_values();

    return 0;
}
