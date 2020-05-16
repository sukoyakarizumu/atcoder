#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool startWith(string s, string prefix) {
  return equal(begin(prefix), end(prefix), begin(s));
}

bool containsOnlyTerms(string s) {
  reverse(s.begin(), s.end());

  vector<string> terms = vector<string>{"dreamer", "dream", "eraser", "erase"};
  for (int i = 0; i < terms.size(); i++) {
    reverse(terms.at(i).begin(), terms.at(i).end());
  }

  while (true) {
  OUT:
    if (s.size() == 0) {
      return true;
    }
    for (int i = 0; i < terms.size(); i++) {
      if (startWith(s, terms.at(i))) {
        s = s.substr(terms.at(i).size());
        goto OUT;
      }
    }
    return false;
  }
}

int main() {
  string S;
  cin >> S;
  cout << (containsOnlyTerms(S) ? "YES" : "NO") << endl;
  return 0;
}