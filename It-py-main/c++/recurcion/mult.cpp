#include <iostream>
#include <vector>

using namespace std;

int multb(int a, int b) {
	if (b == 1) {return a;}
	return a + mult(a, b - 1);
}

int main() {
	cout << multb(5, 6);
	return 0;
}