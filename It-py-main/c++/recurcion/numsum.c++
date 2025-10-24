#include <iostream>
#include <vector>

using namespace std;

int sumnum(int n) {
	if (n == 0) {
		return 0;
	}
	return ((n % 10) + sumnum(int(n / 10)));
}

int main() {
	cout << sumnum(12340);
	return 0;
}