#include <iostream>

std::string isCompress(const std::string &str) {
  std::string N {};
  char last = str[0];
  int  count = 1;
  for(int i = 1; i <= str.size(); ++i) {
    if (i != str.size() && str[i] == last)
      count++;
     else {
       N +=last;
       N.append(std::to_string(count));
       count = 1;
       last = str[i];
     }
  }
  if (N.size() < str.size()) {
    return N;
  }
  else {
    return str;
  }

}

int main() {
  std::string str1 = "kkkllllttttuuu";
  std::cout <<isCompress(str1) << std::endl;

  std::string str2 = "kkllttuu";
  std::cout <<isCompress(str2) << std::endl;
}
