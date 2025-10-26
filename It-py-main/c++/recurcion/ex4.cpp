#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_pal(const string& s, int i = 0, int r = -1) {
  if (i == s.size()) {
    return true;
  }
  if (s[i] !=  s[s.size() - 1 - i]) {
    return false;
  }
  return is_pal(s, i + 1);
}

int main() {
  cout << is_pal("abdba");
  return 0;
}