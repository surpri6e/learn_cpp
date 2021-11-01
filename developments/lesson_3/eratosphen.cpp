#include <iostream>
#include <vector>
using namespace std;

void print_vector_bool(const vector<bool> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << '\t';
    }
    cout << endl;
}


int main() {
    const int N = 100000; //Number in order to stop

    vector<bool> isPrime(N + 1);
    for(int i = 0; i < isPrime.size(); i++) {
        isPrime[i] = true;
    }

    for(int x = 2; /*x*/x <= N; x++){
        // if (isPrime[x])
            for(int y = 2 /*x*/* x; y <= N; y += x) {
                    isPrime[y] = false;
            }
    }

    /*
    for(int x = 2; x <= N; x++)
        if(isPrime[x])
            cout << x << '\t';

    cout << endl;
    */


    return 0;
}
