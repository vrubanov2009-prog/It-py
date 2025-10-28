#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool balanced(const string& s, int i = 0, int b = 0) {
  if (i == s.size()) {
    if (b == 0) {return true;}
    return false;
  }
  if (b < 0) {return false;}
  if (s[i] == '(') {return balanced(s, i + 1, b + 1);}
  return balanced(s, i + 1, b - 1);
}

int main() {
  cout << balanced("(()(()))");
  return 0;
}