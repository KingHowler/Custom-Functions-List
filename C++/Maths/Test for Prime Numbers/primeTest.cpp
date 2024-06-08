#include <cmath>

bool primeTest(int Number)
{
  // Exceptions
  if (Number == 2 || Number == 3) // Check if number is 2 or 3 before checking if the number is a multiple of 2 or 3
  {
    return true;
  }
  if ((Number % 2) == 0 || (Number % 3) == 0) // This check is done before main processing to reduce expressions of possible factors in the main processing
  {
    return false;
  }
  if (Number <= 1) // Number less than 1 are outside of the parameters
  {
    return false;
  }

  // Main Code
  int CheckNum = static_cast<int>(sqrt(Number)); // The limit for calculation, beyond this point all calculations are unnecesaary
  for (int c = 5; c <= CheckNum; c = c + 6)      // Count controlled loop to perfom checks in terms of c + n (which is equivalent to 6k + n where k increments by one each time)
  {
    if ((Number % c) == 0 || ((Number % (c + 2)) == 0)) // The previous checks for 2 and 3 removed all factors leaving only c and c + 2 as expressions for all possible prime factors
    {
      return false;
    }
  }

  return true; // If Number doesn`t fulfill any of the conditions above then it must be a prime number
}
