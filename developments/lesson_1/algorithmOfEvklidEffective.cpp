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

    while (b != 0) {
        a %= b;
        auto tmp = a;
        a = b;
        b = tmp;
        cout << "a = " << a << ", b = " << b << '\n';
    }

    cout << "NOD = " << a << ".\n";

    return 0;
}
