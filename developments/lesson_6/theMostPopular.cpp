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

    setlocale(LC_ALL, "rus");

    const int N = 50;
    const int diaposone = 21;
    vector<int> countersArray(diaposone);
    int countNumber = 0;
    int maxCounterVal = 0;

    for(int i = 0; i < N; i++) {
        cin >> countNumber;
        assert(countNumber >= 0 && countNumber < diaposone);
        countersArray[countNumber]++;
    }

    for(int i = 0; i < diaposone; i++) {
        if(countersArray[i] > maxCounterVal)
            maxCounterVal = countersArray[i];
    }

    cout << "The most popular number(s): ";
    for(int i = 0; i < diaposone; i++) {
        if(countersArray[i] == maxCounterVal)
            cout << i << '\t';
    }

    cout << endl;

    print_vector_int(countersArray);

    return 0;
}
