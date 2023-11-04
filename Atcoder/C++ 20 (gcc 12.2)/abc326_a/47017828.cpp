#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (X < Y) {
        if (Y - X <= 2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        if (X - Y <= 3) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
