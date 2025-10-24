#include <iostream>
#include <vector>

using namespace std;

int block(int h, string a) {
    int v1 = (h + 1) / 2;
    for (int i = 0; i < h; i = i + 1) {
        for (int j = 0; j < h; j = j + 1) {
            if ((abs(i - v1) % 2 == v1 % 2 or abs(j - v1) % 2 == v1 % 2)) {
                cout << a + " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
 int main() {
    block(10, "#");
}