#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> sub_set(const string& s,int k = -1) {
    if (k == -1) {k = s.size() - 1;}
    
    if (k == 0) {return {""};}
    
    string vs = s;
    
    for (int i = 0; i < k - 1; i = i + 1) {
        vs.pop_back();
    }
    
    vector<string> prev = sub_set(vs);
    vector<string> res = prev;
    for (int i = 0; i < prev.size(); i = i + 1) {
        res.push_back(prev[i] + s[k]);
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
    cout_vec(sub_set("abc"));
    return 0;
}
