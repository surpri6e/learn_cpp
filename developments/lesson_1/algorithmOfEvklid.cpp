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
    uint32_t x;

    while (a != b) {
        if (a > b) {
            a -= b;
        } else if (b > a) {
            b -= a;
        }
    }

    x = a;

    cout << "NOD = " << x << ".\n";

    return 0;
}
