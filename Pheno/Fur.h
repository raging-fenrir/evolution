#pragma once
#include <functional>
#include "Pheno.h"


class Fur : public Pheno
{
  public:
    Fur(System*, int, double, int, double);
     
    double  get_attractiveness	    ();
    double  get_environmentReaction    ();

  protected:
    int	    my_eN, my_aN;
    std::binomial_distribution<int> environment	  ;
    std::binomial_distribution<int> attractiveness;
    std::default_random_engine	    generator;


    typedef std::chrono::high_resolution_clock clock;
};
