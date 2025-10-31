#include <iostream>
#include <vector>
#include <string>

using namespace std;

int coprm_check(int a, int b) {
    if (a == 1 or b == 1) {return 1;}
    if (a == 0 or b == 0) {return 0;}
    if (a < b) {return coprm_check(b, a);}
    return coprm_check(b, a % b);
}

int phi_n(int n, int r = 1) {
    if (r == n) {return 0;}
    return coprm_check(n, r) + phi_n(n, r + 1);
}

int main() {
    cout << phi_n(11);
    return 0;
}
