#include "../System/System.h"
#include "../Environment/Sewer.h"
#include "../Population/Rat.h"
#include "../Pheno/RatFur.h"

int main (int argc, char* argv[])
{
  System* system = new System();

  system->set_environment (new Sewer (system));

  return 0;
}
