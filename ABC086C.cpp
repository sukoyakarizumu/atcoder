#include <iostream>
#include <vector>
using namespace std;

bool canTravel(vector<tuple<int, int, int>> ps) {
  int nowt = 0;
  int nowx = 0;
  int nowy = 0;

  for (int i = 0; i < ps.size(); i++) {
    int pt = get<0>(ps.at(i));
    int px = get<1>(ps.at(i));
    int py = get<2>(ps.at(i));
    int distance = abs(px - nowx) + abs(py - nowy);
    int remainderTime = (pt - nowt) - distance;
    if (remainderTime < 0 || remainderTime % 2 == 1) {
      return false;
    }
    nowt = pt;
    nowx = px;
    nowy = py;
  }
  return true;
}

int main() {
  int N;
  cin >> N;
  vector<tuple<int, int, int>> ps = vector<tuple<int, int, int>>(0);
  for (int i = 0; i < N; i++) {
    int t, x, y;
    cin >> t >> x >> y;
    ps.push_back(make_tuple(t, x, y));
  }
  cout << (canTravel(ps) ? "Yes" : "No") << endl;
}