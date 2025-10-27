#include <iostream>
#include <vector>
#include <string>

using namespace std;

 string char_remove(string s, char ch, int i = 0) {
  if (i == s.size()) {return s;}
  if (s[i] == ch) {
    s.erase(i, 1);
    i = i - 1;
  }
  return char_remove(s, ch, i + 1);
}

int main() {
  cout << char_remove("abcd", 'b');
  return 0;
}