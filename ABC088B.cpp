#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  vector<int> a(N);

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }
  sort(a.rbegin(), a.rend());

  int alice = 0;
  int bob = 0;
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      alice += a[i];
    } else {
      bob += a[i];
    }
  }
  cout << alice - bob << endl;
  return 0;
}