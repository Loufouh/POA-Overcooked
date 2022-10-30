#include <iostream>
#include "agent/Agent/Agent.h"

int main(void) 
{
  std::cout << "Hello environment!" << std::endl;

  /* Erreur de compilation : undefined reference à n'importe fonction appelée appartenant à Agent
  agent::Agent* a = agent::Agent::getInstance_ptr();
  a->main_loop();
  */

  return 0;
}

