#pragma once
#include "../System/System.h"

class Population
{
  public:
    Population (class System* system);

    virtual void initialize (int) = 0;
    virtual void reproduce  () = 0;
    void    add_phenos	    (int);

    std::vector<int> get_phenos (){return my_phenos;}
  protected:
    class System* my_system = nullptr;
    std::vector<int>  my_phenos  = std::vector<int>();
};
