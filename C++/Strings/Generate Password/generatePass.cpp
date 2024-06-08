#include "randomChar.cpp" // include the functions : randomChar, randomCharInit, exists
#include "exists.cpp"

void generatePassInit() { randomCharInit(); } // use generatePassInit to seed the generator

std::string generatePass(int length, int mode, bool duplicate)
{ // take the length, generator mode, and boolean for duplicated characters check as input
  if (duplicate == false)
  { // return -1 if there aren't enough characters to create unique password
    if (mode != 2 && length > 26)
    {
      return "-1";
    }
    if (mode == 2 && length > 52)
    {
      return "-1";
    }
  }

  std::string pass;

  for (int l = 0; l < length; l++)
  {

    if (duplicate == true)
    { // if duplicated characters are allowed, concatenate random characters directly
      pass = pass + randomChar(mode);
    }

    else
    { // if duplicated characters are not allowed, check each random character before concatenation
      char buff;
      do
      {
        buff = randomChar(mode);
      } while (exists(pass, buff));

      pass = pass + buff;
    }
  }
  return pass; // return the password generated
}
