#pragma once
#include <random>
#include <chrono>
#include <unistd.h>
#include "../System/System.h"

class Pheno
{
  public:
    Pheno  (class System* system);
    virtual int get_attractiveness	() = 0;
    virtual int get_environmentReaction () = 0;

  protected:
    class System* my_system = nullptr;
};
