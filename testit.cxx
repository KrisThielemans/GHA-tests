#include <cstdlib>
#include <string>
#include <iostream>
int main()
{     
  const char * var = std::getenv("TESTENV");
  if (!var)
    {
      std::cerr << "TESTENV not set\n";
      exit(1);
    }
  if (std::string("VALUE") != var)
    {
      std::cerr << "TESTENV set to " << var <<  "\n";
      exit(1);
    }
  exit(0);
}
