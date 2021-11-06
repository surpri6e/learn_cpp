#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void print_vector_int(const vector<uint64_t> arr) {
    cout << "[" << arr[0];
    for(int i = 1; i < arr.size(); i++)
        cout << ", " << arr[i];
    cout << "]" << endl;
}

int main() {

    unsigned int limitPrimeNumber = 132050; //It is limit for find Mersenne prime numbers
    uint8_t limitOfPerfectNumbers;
    uint64_t current = 0;
    unsigned int digit = 2;
    uint64_t sumOfDigit = 0;
    unsigned int indexOfArray = 0;
    cin >> limitOfPerfectNumbers;
    vector<uint64_t> arrayOfPerfectNumbers;
    vector<bool> isPrime(limitPrimeNumber + 1);
    vector<uint64_t> arrayOfPrimeNumbers;

    for(int i = 0; i < isPrime.size(); i++)
        isPrime[i] = true;

    for(int x = 2; x <= limitPrimeNumber; x++){
        if (isPrime[x]) {
            for(int y = 2 * x; y <= limitPrimeNumber; y += x) {
                    isPrime[y] = false;
            }
        }
    }

    for(int i = 2; i < isPrime.size(); i++) {
        if(isPrime[i])
            arrayOfPrimeNumbers.push_back(i);
    }


    while(true) {
        current = pow(2, arrayOfPrimeNumbers[indexOfArray] - 1) * (pow(2, arrayOfPrimeNumbers[indexOfArray]) - 1);

        while(digit * digit <= current) {
            if (current % digit == 0) {
                sumOfDigit += digit;
            }
            digit += 1;
        }

        if (current == sumOfDigit)
            arrayOfPerfectNumbers.push_back(current);

        if(indexOfArray >= limitOfPerfectNumbers)
            break;

        indexOfArray++;
    }

    print_vector_int(arrayOfPerfectNumbers);

    return 0;
}
