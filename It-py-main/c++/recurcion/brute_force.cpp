#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> brt_forc(int n, const vector<string>& s) {
    if (n == 1) {return s;}

    vector<string> res = s;
    vector<string> prev = brt_forc(n - 1, s);
    int l = prev.size();

    for (int i = 0; i < l; i = i + 1) {
        for (int j = 0; j < s.size(); j = j + 1) {
            res.push_back(prev[i] + s[j]);
        }
    }

    return res;
}

void cout_vec(const vector<string>& s) {
    int k = s.size();
    int l = s[k - 1].size();
    int v = 0;
    for (int i = 0; i < k; i = i + 1) {
        for (int j = 0; j < l - s[i].size(); j = j + 1) {
            cout << " ";
        }
        cout << s[i] << " | ";
        
        v = v + 3 + l;
        if (v > 80) {
            cout << endl;
            v = 0;
        }
    }
}

int main() {
    cout_vec(brt_forc(4, {"0", "1"}));
    cout << endl;
    return 0;
}
