#include <iostream>
using namespace std;

int sumDigits(int num) {
  string str = to_string(num);
  int sumDigit = 0;
  for (int i = 0; i < str.size(); i++) {
    char digit = str.at(i);
    sumDigit += atoi(&digit);
  }
  return sumDigit;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int result = 0;
  for (int n = 1; n <= N; n++) {
    int sum = sumDigits(n);
    if (A <= sum && sum <= B) {
      result += n;
    }
  }
  cout << result << endl;
  return 0;
}
