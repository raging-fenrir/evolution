#include "Sewer.h"
#include <iostream>

Sewer::Sewer (System* system) : 
  Environment(system)
{}

void Sewer::actOn(Population* population)
{
  std::cout << "eeeeeeh" << std::endl;
}
