#include <iostream>
#include <cmath>
using namespace std;


int main() {

    uint64_t sumOfProgression = 0;
    int valueOfNumberInPow = 0;
    int valueNumberOfPow = 0;

    cout << "Enter your number of pow: ";
    cin >> valueNumberOfPow;
    cout << "Enter your number in pow: ";
    cin >> valueOfNumberInPow;

    if(valueNumberOfPow <= 0 || valueNumberOfPow >= 1000)
        cout << "Error! Read of documentation!" << endl;
    if(valueOfNumberInPow <= 0 || valueOfNumberInPow >= 1000)
        cout << "Error! Read of documentation!" << endl;


    for(int i = 1; i <= valueNumberOfPow; i++) {
        sumOfProgression += pow(i, valueOfNumberInPow);
    }

    cout << "Sum of progression is " << sumOfProgression << ".\n";

    return 0;
}
