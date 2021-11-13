#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "rus");

    const uint16_t BASE = 10;
    int16_t maxDigitOfNumber = -1;
    int16_t minDigitOfNumber = BASE;
    int16_t digit = 0;
    int64_t numberCheck = -1;
    int64_t number = 0;

    cout << "Enter your number: ";
    cin >> numberCheck;

    cout << "Теперь есть русский язык!" << endl;

    number = (numberCheck >= 0) ? numberCheck : -numberCheck;

    if(number != 0) {
        while(number != 0) {

            digit = number % BASE;

            maxDigitOfNumber = max(maxDigitOfNumber, digit);
            minDigitOfNumber = min(maxDigitOfNumber, digit);

            number /= BASE;

        }

        if(maxDigitOfNumber != minDigitOfNumber) {
            cout << "Max digit of number: " << maxDigitOfNumber << ".\n";
            cout << "Min digit of number: " << minDigitOfNumber << ".\n";
        }

        else
            cout << "In your number all digits are identical!";

    }

    else
        cout << "Your number incorrect! Read documentation!";

    return 0;
}
