#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int result = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1') result++;
  }
  cout << result << endl;
  return 0;
}