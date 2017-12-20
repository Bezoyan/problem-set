//fastest possible solution

#include <iostream>

bool isUnique(std::string str) {
  for(int i = 0; i < str.size(); ++i) {
    for(int j = i + 1; j < str.size(); ++j) {
      if(str[i] == str[j]) {
        return false;
      }
    }
  }
  return true;
}

int main () {
  std::string str1 = "aramayis";
  std::cout << isUnique(str1) << std::endl;

  std::string str2 = "arev";
  std::cout <<isUnique(str2) << std::endl;

  return 0;

}
