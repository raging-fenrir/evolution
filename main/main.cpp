#include <iostream>
#include "../System/System.h"
#include "../Environment/Sewer.h"
#include "../Population/Rat.h"
#include "../Pheno/Fur.h"
using std::cout;
using std::endl;
int main (int argc, char* argv[])
{
  System* system = new System();

  system->set_environment (new Sewer (system));
  system->add_pheno	  (new Fur   (system,100,0.5,100,0.5));
  system->add_population  (new Rat   (system));
  system->get_populations()[0]->add_phenos(0);

  return 0;
}
