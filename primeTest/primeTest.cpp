#include <cmath>

bool primeTest (int Number) {
  if (Number == 2 || Number == 3) {return true;}
  if (Number <= 1) {return false;}
  if ((Number % 2) == 0 || (Number % 3) == 0) {return false;}

  else {
    int CheckNum = static_cast<int>(sqrt(Number));

    for (int c = 5; c <= CheckNum; c = c + 6) {
      if ((Number % c) == 0 || ((Number % (c+2)) == 0)) {return false;}
    }
  }
  
  return true;
}
