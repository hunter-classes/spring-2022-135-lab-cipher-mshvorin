#include <iostream>
#include "funcs.h"

int main()
{
  cout << solve(encryptCaesar("Hello there! How are you doing?", 22)) << "\n" <<  endl;

  cout << solve(encryptCaesar("The toy brought back fond memories of being lost in the rain forest.", 5)) <<  endl;

  return 0;
}
