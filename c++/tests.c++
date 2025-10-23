#include <iostream>
#include <vector>

using namespace std;

int block(int h, string a) {
    for (int i = 1; i <= h; i = i + 1) {
        for (int j = 1; j <= h; j = j + 1) {
            cout << a + " ";
        }
        cout << endl;
    }
    return 0;
}
 int main() {
    block(10, "#");
}