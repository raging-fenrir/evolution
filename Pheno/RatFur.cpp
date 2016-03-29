#include "RatFur.h"

RatFur::RatFur (System* system, int eN, double eP, int aN, double aP) :
  Pheno(system)
{
  std::binomial_distribution<int> environment(eN,eP);
  std::binomial_distribution<int> attractiveness(aN,aP);
  usleep(microseconds);
  clock::duration d = clock::now() - start;
  unsigned seed = d.count();
  generator.seed(seed);
}

int RatFur::get_attractiveness ()
{
  int attract;
  attract = attractiveness(generator);
  return attract;
}

int RatFur::get_environmentReaction ()
{
  int react;
  react = environment(generator);
  return react;
}
