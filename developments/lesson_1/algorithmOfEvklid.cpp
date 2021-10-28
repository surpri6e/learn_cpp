#include <iostream>
using namespace std;

int main() {
    /*Algorithm of Evklid*/

    uint64_t a;
    uint64_t b;
    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter your second number: ";
    cin >> b;

    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        } else {
            b %= a;
        }
        cout << "a = " << a << ", b = " << b << '\n';
    }

    cout << "NOD = " << a + b << ".\n";

    return 0;
}
