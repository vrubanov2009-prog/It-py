#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool contains(const vector<int>& a, int x,int i = 0) {
	if (i == a.size()) {return false;}
	if (x == a[i]) {return true;}
	return contains(a, x, i + 1);
}

int main() {
	cout << contains({3, 4, 8, 9, 45}, 3);
	return 0;
}