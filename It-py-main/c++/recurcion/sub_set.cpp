#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> sub_set(const string& s) {
    if (s.empty()) {return {""};}
    string vs = "";
    vs = s.substr(0, s.size() - 1);
    vector<string> res;
    res = sub_set(vs);
    int vss = res.size();
    for (int j = 0; j < vss; j = j + 1) {
        res.push_back(res[j] + s.back());
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
    cout_vec(sub_set("abcdefghij"));
    return 0;
}