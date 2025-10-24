#include <iostream>
#include <vector>

using namespace std;

int facto(int n, int fact = 1) {
    if (n == 0) {
        return fact;
    }
    cout<<fact<<endl;
    return facto(n - 1, fact * n);
}

int fact_reverse(int n){
    if (n == 1) return n;
    return n * fact_reverse(n-1);
    
}

int main() {
    cout << fact_reverse(4);
    return 0;
}