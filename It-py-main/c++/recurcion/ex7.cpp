#include <iostream>
#include <vector>
#include <string>

using namespace std;

int min_rec(const vector<int>& a, int i = 0) {
  if (i == a.size() - 1) {return a[i];}
  if (a[i] < min_rec(a, i + 1)) {return a[i];}
  return min_rec(a, i + 1);
}

int main() {
  cout << min_rec({9, 6, 4, 9, 4, 7});
  return 0;
}