#include <iostream>

bool isEdited(std::string str1, std::string str2) {
  int s1 = str1.size();
  int s2 = str2.size();


  if ((s1 - s2) > 1)
    return false;

    int count = 0;

    for (int i = 0; i < s1; ++i ) {
      for (int j = 0; j < s2; ++j) {
        if (str1[i] != str2[j]) {
          if (count == 1)
          return false;

          if (s1 > s2)
             ++i;
          else if (s2 < s1)
             ++j;
          else {
            ++i;
            ++j;
          }
          count++;
        }
        else {
          ++i;
          ++j;
        }
      }
    }
    int i, j;
  if ( (i < s1 || j < s2 ));
  count++;

  return count == 1;
}

int main() {
  std::string str1 = "hjh";
  std::string str2 = "h";
  isEdited( str1, str2)?
  std::cout << "Yes: number of edits is 1": std::cout << "No: number of edits is 0";
  return 0;
}
