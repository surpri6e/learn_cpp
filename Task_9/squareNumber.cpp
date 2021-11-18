#include <iostream>

using namespace std;

int main() {

    unsigned int lastNumber = 0;
    uint64_t squareOfCounterNumber;

    cout << "Enter your number is size of sequence: ";
    cin >> lastNumber;

    lastNumber = (lastNumber > 0) ? lastNumber : (lastNumber == 0) ? 1 : -lastNumber;

    for(int square = 2; square <= lastNumber; square++) {
        cout << square << " ----- " << square * square << endl;
    }

    return 0;
}
