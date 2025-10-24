#include <iostream>
#include <vector>
#include <string>

using namespace std;

int count_char(const string& s, char ch, int i = 0) {
	if (i == s.size()) {return 0;}
	if (ch == s[i]) {return 1 + count_char(s, ch, i + 1);}
	return count_char(s, ch, i + 1);
}

int main() {
	cout << count_char("banana", 'a');
	return 0;
}