#include <iostream>
#include <vector>
#include <string>

using namespace std;

 string char_remove(const string& s, char ch, int i = 0) {
  if (i == s.size()) {return "";}
	if (s[i] == ch) {return char_remove(s, ch, i + 1);}
	return s[i] + char_remove(s, ch, i + 1);
}

int main() {
  cout << char_remove("abcd", 'b');
  return 0;
}