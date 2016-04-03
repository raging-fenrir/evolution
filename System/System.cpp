#include "System.h"

System::System()
{}

void System::naturalSelect()
{
}

void System::add_population (class Population* population)
{ my_popus.push_back(population); }

void System::add_pheno (class Pheno* pheno)
{ my_phenos.push_back(pheno); }

void System::set_environment (class Environment* environment)
{ my_enviro = environment; }
