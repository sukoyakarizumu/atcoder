#include <iostream>
#include <vector>
using namespace std;

int improveSeq(vector<int> &a, bool positive) {
  int res = 0;
  int sum = 0;
  for (int i = 0; i < a.size(); i++) {
    int nextSum = sum + a.at(i);
    if (positive && nextSum >= 0) {
      a.at(i) -= (nextSum + 1);
      res += nextSum + 1;
    }
    if (!positive && nextSum <= 0) {
      a.at(i) += (-nextSum + 1);
      res += -nextSum + 1;
    }
    sum += a.at(i);
    positive = !positive;
  }
  return res;
}

int main() {
  int n;
  cin >> n;
  vector<int> a1 = vector<int>(n);
  vector<int> a2 = vector<int>(n);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    a1.at(i) = a;
    a2.at(i) = a;
  }

  int count1 = improveSeq(a1, true);
  int count2 = improveSeq(a2, false);

  int count = count1 < count2 ? count1 : count2;
  cout << count << endl;
  return 0;
}