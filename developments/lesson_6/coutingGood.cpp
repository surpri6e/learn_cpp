#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

void print_vector_int(const vector<int> &arr) {
    cout << "[" << arr[0];
    for(int i = 1; i < arr.size(); i++) {
        cout << ", " << arr[i];
    }
    cout << "]" << endl;
}

int main() {

    const int N = 10;
    vector<int> countersArray(10);
    int countNumber = 0;

    for(int i = 0; i < N; i++) {
        cin >> countNumber;
        assert(countNumber >= 0 && countNumber <= 9);
        countersArray[countNumber]++;
    }

    print_vector_int(countersArray);

    return 0;
}
