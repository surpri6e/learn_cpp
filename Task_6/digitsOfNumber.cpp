#include <iostream>
using namespace std;

int main() {

    const uint16_t BASE = 10;
    int16_t maxDigitOfNumber = -1;
    int16_t minDigitOfNumber = BASE;
    int16_t digit = 0;
    int64_t numberCheck = -1;
    int64_t number = 0;

    cout << "Enter your number: ";
    cin >> numberCheck;

    number = (numberCheck >= 0) ? numberCheck : -numberCheck;

    while(number != 0) {

        digit = number % BASE;

        maxDigitOfNumber = max(maxDigitOfNumber, digit);
        minDigitOfNumber = min(maxDigitOfNumber, digit);

        number /= BASE;

    }

    cout << "Max digit of number: " << maxDigitOfNumber << ".\n";
    cout << "Min digit of number: " << minDigitOfNumber << ".\n";

    return 0;
}
