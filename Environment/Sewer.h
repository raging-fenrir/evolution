#pragma once
#include "Environment.h"

class Sewer : public Environment
{
  public:
    Sewer (class System* system);

    void actOn	(Population* population);
};
