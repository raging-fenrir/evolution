#include "Fur.h"

Fur::Fur (System* system, int eN, double eP, int aN, double aP) :
  Pheno(system),
  environment(eN,eP),
  attractiveness(aN,aP)
{
  my_eN = eN;
  my_aN = aN;
  clock::duration d = clock::now() - my_system->start;
  unsigned seed = d.count();
  generator.seed(seed);
}

double Fur::get_attractiveness ()
{
  return attractiveness(generator)/(double)my_aN;
}

double Fur::get_environmentReaction ()
{
  return environment(generator)/(double)my_eN;
}
