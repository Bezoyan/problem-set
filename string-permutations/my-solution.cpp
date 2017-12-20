#include <iostream>

bool isPermutation(const std::string& str1, const std::string& str2) {
  for (int i = 0; i < str1.size(); ++i) {
    for (int j =0 ; j <str1.size(); +j){
    if (str1.size() != str2.size()) {
        return false;

    }
    return true;
  }
 }
}




int main () {
  std::string s1 = "ara";
  std::string s2 = "arev";
  std::cout <<isPermutation(s1, s2) << std::endl;
  std::string s3 = "arlla";
  std::string s4 = "arevb";
  std::cout <<isPermutation(s3, s4) << std::endl;


}
