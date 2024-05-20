#include <string>

bool exists(std::string text, char letter) {

  for (int i = 0; i < text.length(); i++) {
    if (text[i] == letter) {return true;}
  }

  return false;
}
