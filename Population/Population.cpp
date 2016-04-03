#include "Population.h"

Population::Population (class System* system)
{ my_system = system; }

void Population::add_phenos(int phenoNr)
{
  my_phenos.push_back(phenoNr);
  std::sort(my_phenos.begin(),my_phenos.end());
}

void Population::initialize (int popSize)
{


}
