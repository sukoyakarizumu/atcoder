#include <iostream>
using namespace std;

int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;
  int count = 0;
  for (int ai = 0; ai <= A; ai++) {
    for (int bi = 0; bi <= B; bi++) {
      for (int ci = 0; ci <= C; ci++) {
        if (ai * 500 + bi * 100 + ci * 50 == X) {
          count++;
        }
      }
    }
  }
  cout << count << endl;
  return 0;
}
