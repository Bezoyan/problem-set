#include<iostream>
using namespace std;
string  isURLify(string str) {
	for(int i = 0; i < str.size(); ++i) {
		if(str[i] == ' ')
			cout <<"%20";
		else
			cout <<str[i];
	}
  cout <<endl;
}
int main() {
    string str1 = "barev es em";
    cout << isURLify(str1) << endl;

}
