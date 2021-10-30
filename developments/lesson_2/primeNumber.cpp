#include <iostream>
using namespace std;

int main() {
    //Check number on prime
    int64_t x;
    cin >> x;

    if (x <= 1)
        cerr << "x should be not negative";
    bool is_prime = true;
    int64_t digit = 2;

    while(digit * digit <= x) {
        if (x % digit == 0) {
            is_prime = false;
            break;
        }

        digit += 1;
    }

    cout << "This is number is " << (is_prime ? "" : "not ") << "prime.\n";

    return 0;
}
