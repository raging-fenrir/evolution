#pragma once
#include "../System/System.h"

class Pheno
{
  public:
    Pheno  (class System* system);

  protected:
    class System* my_system = nullptr;
};
