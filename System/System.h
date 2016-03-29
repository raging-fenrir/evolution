#pragma once
#include <vector>
#include "../Population/Population.h"
#include "../Environment/Environment.h"
#include "../Pheno/Pheno.h"

class System
{
  public:
    System ();

    void add_population	  (class Population* population);
    void add_pheno	  (class Pheno* pheno);
    void set_environment  (class Environment* environment); 

    std::vector<class Population*>& get_populations   (){return my_popus;}
    std::vector<class Pheno*>&	    get_phenos	      (){return my_phenos;}

  protected:
    std::vector<class Population*>  my_popus  = std::vector<class Population*>();
    std::vector<class Pheno*>	    my_phenos =	std::vector<class Pheno*>();
    class Environment*		    my_enviro = nullptr;
};
