#pragma once
#include "Population.h"

class Rat : public Population
{
  public:
    Rat(class System* system);

    void  initialize  (int);
    void  reproduce   ();
    
  protected:
};

