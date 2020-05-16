#include <iostream>
#include <vector>
using namespace std;

bool everyEven(vector<int>& a) {
  for (int i = 0; i < a.size(); i++) {
    if (a[i] % 2 == 1) {
      return false;
    }
  }
  return true;
}

void divideTwo(vector<int>& a) {
  for (int i = 0; i < a.size(); i++) {
    a[i] = a[i] / 2;
  }
}

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  int count = 0;
  while (everyEven(a)) {
    divideTwo(a);
    count++;
  }
  cout << count << endl;
  return 0;
}