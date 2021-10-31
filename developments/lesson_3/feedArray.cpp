#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Acquaintance with arrays
    int A[6] = {0, 1, 2, 3, 4, 5};
    // A = {2, 8, 3, 5, 1, 7}; - It is forbidden
    // A[-10230] = 0; - ERROR!!!
    // A[12313] = 0; - ERROR!!!
    vector<int> B = {2, 4, 6, 8, 10};

    // Fashionable for loop
    for(int /*&*/i: B) { // & - allows us to change the element
        cout << i << '\t';
    }

    cout << endl;


    for(int i = 0; i < B.size(); i++) {
        B[i] = (i + 5) * 3;
        cout << B[i] << '\t';
    }

    cout << endl;


    for(int i = 0; i < 12; i++) {
        B[i] = (i + 5) * 3;
        cout << B[i] << '\t';
    }
    B[-12] = 12;

    cout << endl;


    for(int i = 0; i < 6; i++)
        cout << A[i] << '\t';

    cout << endl;


    int T[10];
    for(int i = 0; i < 10; i++) {
        T[i] = (i + 5) * 2;
        cout << T[i] << '\t';
    }

    return 0;
}
