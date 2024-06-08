#include <string>

bool exists(std::string text, char letter)
{
  // there are no exceptions, all incorrect parameters will result in runtime or syntax errors
  for (int i = 0; i < text.length(); i++)
  { // compare the inputted charater with each charater in the string
    if (text[i] == letter)
    {
      return true;
    } // if they match return true
  }

  return false; // if they don't match return false
}
