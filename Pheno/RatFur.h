#pragma once
#include "Pheno.h"


class RatFur : public Pheno
{
  public:
    RatFur(System*, int, double, int, double);
     
    int get_attractiveness	();
    int	get_environmentReaction ();

  protected:
    std::binomial_distribution<int> environment;
    std::binomial_distribution<int> attractiveness;
    std::default_random_engine	    generator;

    unsigned int microseconds = 100;

    typedef std::chrono::high_resolution_clock clock;
    clock::time_point start = clock::now();
};
