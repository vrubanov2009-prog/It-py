#include <iostream>
#include <vector>

using namespace std;

int fib(int n) {
	if (n == 0) {return 1;}
	if (n == -1) {return 0;}
	return (fib(n - 1) + fib (n - 2));
}

int main() {
	cout << fib(6);
	return 0;
}