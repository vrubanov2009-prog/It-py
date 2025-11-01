#include <iostream>
#include <vector>
#include <string>

using namespace std;

float f(float x) {
    return 5 - x;
}

vector<vector<int>> grafic(int h, vector<int> c = {-1}) {
    if (c[0] == -1) {c = {(h + 1) / 2, (h + 1) / 2};}
    vector<vector<int>> res(h, vector<int>(h, 0));
    int fx;
    if (h - c[1] >= 0 and h - c[1] < h) {res[h - c[1]] = vector<int>(h, 2);}
    if (h - c[0] >= 0 and h - c[0] < h) {
        for (int i = 0; i < h; i = i + 1) {
            res[i][c[0] - 1] = 2;
        }
    }


    for (int i = 0; i < h; i = i + 1) {
        fx = int(h - f((i - c[0] + 1)) + 0.5) - c[1];
        if (fx >= 0 and fx <= h - 1) {res[fx][i] = 1;}
    }

    return res;
}

void print(const vector<vector<int>>& matrix, char a, char b) {
    int h = matrix.size();
    for (int i = 0; i < h; i = i + 1) {
        for (int j = 0; j < h; j = j + 1) {
            if (matrix[i][j] == 1) {
                cout << a << " ";
            }
            else {
                if (matrix[i][j] == 2) {
                    cout << b << " ";
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}

int main() {
    print(grafic(45), '@', '#');
    return 0;
}