#pragma once
#include <random>
#include <chrono>
#include "../System/System.h"

class Pheno
{
  public:
    Pheno  (class System* system);
    virtual double  get_attractiveness	 () = 0;
    virtual double  get_environmentReaction () = 0;

  protected:
    class System* my_system = nullptr;
};
