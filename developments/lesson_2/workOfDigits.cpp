#include <iostream>

int main() {
    //Analytic digits of number
    const int BASE = 10;
    int numOfNumber = 0;
    int sumOfDigits = 0;
    int productionOfDigits = 1;
    int maxDigit = -1;
    int minDigit = BASE;

    int x, y;
    std::cout << "Enter your number: ";
    std::cin >> x;
    y = (x >= 0) ? x : -x;

    while(y != 0) {
        int digit = y % BASE;

        numOfNumber += 1;
        sumOfDigits += digit;
        productionOfDigits *= digit;
        maxDigit = std::max(maxDigit, digit);
        minDigit = std::min(maxDigit, digit);

        y /= BASE;
    }

    std::cout << "numOfNumber = " << numOfNumber << ".\n";
    std::cout << "sumOfDigits = " << sumOfDigits << ".\n";
    std::cout << "productionOfDigits = " << productionOfDigits << ".\n";
    std::cout << "maxDigit = " << maxDigit << ".\n";
    std::cout << "minDigit = " << minDigit << ".\n";

    return 0;
}
