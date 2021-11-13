#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

void print_vector_int(const vector<int> arr) {
    cout << "[" << arr[0];
    for(int i = 1; i < arr.size(); i++) {
        cout << "," << arr[i];
    }
    cout << "]" << endl;
}

int main() {

    int countNumber = 0;
    int diapason;
    int sizeSequence;

    cout << "Enter your number is size of sequence numbers: ";
    cin >> sizeSequence;
    cout << "Enter your number is diapason numbers: ";
    cin >> diapason;

    sizeSequence = (sizeSequence > 0) ? sizeSequence : (sizeSequence == 0) ? 1 : -sizeSequence;
    diapason = (diapason > 0) ? diapason : (diapason == 0) ? 1 : -diapason;

    vector<int> countersArray(diapason);
    vector<int> sortedArray;

    for(int i = 0; i < sizeSequence; i++) {
        cin >> countNumber;
        assert(countNumber >= 0 && countNumber < diapason);
        countersArray[countNumber]++;
    }

    for(int i = 0; i < diapason; i++) {
        if(countersArray[i]) {
            sortedArray.push_back(i);
        }
    }

    print_vector_int(sortedArray);

    return 0;
}
