#include <iostream>
#include <vector>
#include <string>

using namespace std;

string rev_inp(string& s, int i = 0) {
	if (i == s.size()) {
		string a = "";
		return a;
	}
	return rev_inp(s, i + 1) + s[i];
}

int main() {
	string a = "asuygc123";
	cout << rev_inp(a);
	return 0;
}