#include <cstdlib>
#include <ctime>

char Characters[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                       'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                       'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                       'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; // This array contains all possible characters that can be outputed

void randomCharInit() { std::srand(static_cast<unsigned int>(std::time(nullptr))); } // Function to seed the generator, this ensures the generated character is unique each time

char randomChar(int mode)
{
  switch (mode)
  {
  case 0: //  lowercase generator mode
    return Characters[std::rand() % 26];
    break;
  case 1: // UPPERCASE generator mode
    return Characters[(std::rand() % 26) + 26];
    break;
  case 2: //  boTH generator mode
    return Characters[std::rand() % 52];
    break;
  default: // Incorrect mode/parameter
    return '*';
    break;
  }
}
