#include "grumpywizard.h"

void GrumpyWizard::specialMove(Creature& target) { 
            std::cout << "The Grumpy Wizard casts Banish on " << target.getName() << std::endl; 
            delete &target; 
            std::cout << target.getName() << " vanishes from existence!" << std::endl;
        }


void GrumpyWizard::attack(Creature& target) { 
            std::cout << "The Grumpy Wizard casts Disintegrate on " << target.getName() << std::endl;
            target.takeDamage(500);
        }