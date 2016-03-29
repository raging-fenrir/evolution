#pragma once
#include "Population.h"

class Rat : Population
{
  public:
    Rat(class System* system);

    void  initialize  ();
    void  reproduce   ();

  protected:
};

