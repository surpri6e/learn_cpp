#include <iostream>
using namespace std;

int main() {
    /*Search maximum of number's subsequence*/
    int64_t x;
    cout << "Enter your number: ";
    cin >> x;
    int64_t maximum;
    bool is_maximum_vacant = true;

    while(x != 0) {
        if (is_maximum_vacant or x > maximum) {
            maximum = x;
            is_maximum_vacant = false;
        }
        cin >> x;
    }
    if (is_maximum_vacant) {
        cout << "No numbers is succession!";
    }  else {
        cout << "Maximum is " << maximum << ".\n";
    }
    return 0;
}
