#include <iostream>
#include <vector>

using namespace std;

void spiral(int h, string a) {
    for (int i = 0; i < h; i = i + 1) {
        for (int j = 0; j < h; j = j + 1) {
            if (j == i + 1 and i + 1 >= h / 2) {
                if (abs(i - (h - 1) / 2) % 2 == 1 + (((h - 1) / 2) % 2)) {
                    cout << a + " ";
                }
                else {
                    cout << "  ";
                }
            }
            else {
                if (abs(i - (h - 1) / 2) % 2 == ((h - 1) / 2) % 2) {
                    if (abs(i - (h - 1) / 2) <= abs(j - (h - 1) / 2)) {
                        cout << a + " ";
                    }
                }
                else {
                    cout << "  ";
                }
            }
        cout << endl;
        }
    }
}

int main() {
    spiral(5, "#");
    return 0;
}