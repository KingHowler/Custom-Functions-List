#include "randomChar.cpp"
#include "exists.cpp"

void generatePassInit() {randomCharInit();}

std::string generatePass(int length, int mode, bool duplicate) {
  if (duplicate == false) {
    if (mode != 2 && length > 26) {return "Error : Can`t generate enough unique characters";}
    if (mode == 2 && length > 52) {return "Error : Can`t generate enough unique characters";}
    }

  std::string pass;
  char buff;

  for (int l = 0; l < length; l++) {

    if (duplicate == true) {
      pass = pass + randomChar(mode);
    }

    else {

      do {
        buff = randomChar(mode);
      } while(exists(pass, buff));

      pass = pass + buff;

    }
  }
  return pass;
}
