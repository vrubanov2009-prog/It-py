#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> fact(int n, int i = 2) {
    if (n == 1) {return {};}
    if (n % i == 0) {
        vector<int> prev = fact(n / i);
        prev.push_back(i);
        return prev;
    }
    return fact(n, i + 1);
}

void cout_vec(const vector<int>& s) {
    for (int i = s.size() - 1; i >= 0; i = i - 1) {
        cout << s[i] << " ";
    }
}

int main() {
    cout_vec(fact(10));
    return 0;
}
