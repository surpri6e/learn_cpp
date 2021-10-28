#include <iostream>
using namespace std;

int main() {
    /*That code check number on parity, very easy algoritm*/
    uint64_t x;
    cout << "Enter your number for build graphic: ";
    cin >> x;

    uint32_t e = 0;
    uint32_t o = 0;

    for(uint64_t i = 0; i <= x; i++) {
        if (0 == i) {
            cout << "This is number is a terminator " << i << ".\n";
            continue;
        }
        if (i % 2 == 0) {
                cout << "This is a number is even " << i << ".\n";
                e += 1;
        }
        if (i % 2 != 0) {
                cout << "This is a number is odd " << i << ".\n";
                o += 1;
        }
    }

    cout << "Even numbers - " << e << ".\n";
    cout << "Odd numbers - " << o << ".\n";

    return 0;
}
