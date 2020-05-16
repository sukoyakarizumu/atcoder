#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<int> dset = set<int>();
  for (int i = 0; i < N; i++) {
    int d;
    cin >> d;
    dset.insert(d);
  }
  cout << dset.size() << endl;
  return 0;
}