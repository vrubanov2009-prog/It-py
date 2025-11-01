#include <iostram>
#include <vector>
#include <string>

using namespace std;

void cout_vec_f(const vector<string>& s, int t) {
    int k = s.size();
    int l = s[k - 1].size();
    int v = 0;
    for (int i = 0; i < k; i = i + 1) {
        for (int j = 0; j < l - s[i].size(); j = j + 1) {
            cout << " ";
        }
        cout << s[i] << " | ";
        
        v = v + 3 + l;
        if (v > t) {
            cout << endl;
            v = 0;
        }
    }
}

void cout_plain(const vector<vector<int>>& matrix) {
    int h = matrix.size();
    for (int i = 0; i < h; i = i + 1) {
        for (int j = 0; j < h; j = j + 1) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

