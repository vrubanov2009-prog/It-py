#include <iostream>
#include <vector>

using namespace std;

vector<int> vsum(const vector<int>& a, const vector<int>& b) {
    vector<int> c = {a[0]+ b[0], a[1] + b[1]};
    return c;
}

vector<vector<int>> spiral(int h) {
    vector<vector<int>> matrix(h, vector<int>(h, 0));

    for (int i = 0; i < h; i = i + 1) {
        for (int j = 0; j < h; j = j + 1) {
            if (i == 0 or i == h - 1 or j == 0 or j == h -1) {
                matrix[i][j] = 1;
            }
        }
    }

    matrix[1][2] = 1;
    matrix[0][1] = 0;
    vector<vector<int>> md = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    vector<vector<int>> cd = {{2, 0}, {0, 2}, {-2, 0}, {0, -2}};
    vector<int> cp = {1, 2};
    int vmd = 0;
    int vw = 0;
    int ec = 0;

    while (vw == 0) {
        if (matrix[(vsum(cp, cd[vmd]))[0]][(vsum(cp, cd[vmd]))[1]] == 1) {
                vmd = (vmd + 1) % 4;
                if (matrix[vsum(cp, cd[vmd])[0]][vsum(cp, cd[vmd])[1]] == 1) {
                    vw = 1;
                }
                if (matrix[vsum(cp, md[vmd])[0]][vsum(cp, md[vmd])[1]] == 1) {
                    break;
                }
            }
        else {}
        matrix[cp[0]][cp[1]] = 1;
        cp = vsum(cp, md[vmd]);
    }

    return matrix;
}

void print(const vector<vector<int>>& matrix, string a) {
    int h = matrix.size();
    for (int i = 0; i < h; i = i + 1) {
        for (int j = 0; j < h; j = j + 1) {
            if (matrix[i][j] == 1) {
                cout << a + " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    print(spiral(10), "#");
    return 0;
}