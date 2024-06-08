int findFactorialBase(int factorial)
{
  // Exceptions
  if (factorial < 1) // Numbers less than 1 are outside of the parameters
  {
    return -1;
  }
  int base = 1;
  do // Continously divide the factorial by base and increment the base, this will bring the factorial closer to the base, if they become equal then the base is found (Reverse-Engineer Factorial)
  {
    if (factorial % base != 0) // Exit early if the factorial is no longer an integer, there was no base
    {
      return -1;
    }
    factorial = factorial / base;
    base = base + 1;
  } while (factorial > base); // repeat until factorial is less than or equal to base

  if (factorial == base) // they factorial became equal to base then the base was found
  {
    return base;
  }
  else // if not, then there was no base
  {
    return -1;
  }
}
