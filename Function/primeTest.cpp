#include <cmath>

bool primeTest (int Number) {
  int CheckNum = static_cast<int>(sqrt(Number));

  if (((Number % 2) == 0) && ((Number % 3) == 0) && (Number <= 3)) {
    return false;
  }
  else {
    for (int c = 5; c <= CheckNum; c = c + 6) {
      if ((Number % c) == 0 || ((Number % (c+2)) == 0)) {
        return false;
      }
    }
  }
  return true;
}
