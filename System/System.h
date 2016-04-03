#pragma once
#include <vector>
#include <algorithm>
#include "../Population/Population.h"
#include "../Environment/Environment.h"
#include "../Pheno/Pheno.h"

class System
{
  public:
    System ();
    typedef std::chrono::high_resolution_clock clock;
    clock::time_point start = clock::now();

    void add_population	  (class Population* population);
    void add_pheno	  (class Pheno* pheno);
    void set_environment  (class Environment* environment); 
    void naturalSelect	  ();

    std::vector<class Population*>& get_populations   (){return my_popus;}
    std::vector<class Pheno*>&	    get_phenos	      (){return my_phenos;}

  protected:
    std::vector<class Population*>  my_popus  = std::vector<class Population*>();
    std::vector<class Pheno*>	    my_phenos =	std::vector<class Pheno*>();
    class Environment*		    my_enviro = nullptr;
};
