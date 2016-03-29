#pragma once
#include "../System/System.h"

class Population
{
  public:
    Population (class System* system);

    virtual void initialize () = 0;
    virtual void reproduce  () = 0;

  protected:
    class System* my_system = nullptr;
};
