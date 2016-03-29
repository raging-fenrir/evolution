#pragma once
#include "../System/System.h"

class Environment
{
  public:
    Environment		(class System* system);

    virtual void actOn	(class Population* population) = 0;

  protected:
    System* my_system = nullptr;
};
