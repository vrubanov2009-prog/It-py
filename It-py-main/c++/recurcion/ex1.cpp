#include <iostream>
#include <vector>

using namespace std;

int sum(const vector<int>& a, int i = 0) {
	if (i == a.size()) {
		return 0;
	}
	return a[i] + sum(a, i + 1);
}

int main() {
	cout << sum({3, 4, 9});
	return 0;
}