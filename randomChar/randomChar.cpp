#include <cstdlib>
#include <ctime>

void randomCharInit() { std::srand(static_cast<unsigned int>(std::time(nullptr))); }


char randomChar(int mode) {

  char Characters[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                         'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                         'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                         'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

  switch (mode) {
    case 0: return Characters[std::rand() % 26]; break;
    case 1: return Characters[(std::rand() % 26) + 26]; break;
    case 2: return Characters[std::rand() % 52]; break;
  }
}
