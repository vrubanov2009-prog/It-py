#include <iostream>
#include <vector>
#include <string>

using namespace std;

string dedub(const string& s, int i = 0, char prev = '\0') {
  if (i == s.size()) {return "";}
  if (i == 0) {return s[0] + dedub(s, 1, s[0]);}
  if (s[i] == prev) {return dedub(s, i + 1, s[i]);}
  return s[i] + dedub(s, i + 1, s[i]);
}

int main() {
  cout << dedub("aaabbbcdeeeff");
  return 0;
}