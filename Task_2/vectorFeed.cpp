#include <iostream>
#include <vector>
using namespace std;

void print_vector(const vector<int> &arr) {
    cout << "[" << arr[0];
    for(int i = 1; i < arr.size(); i++) {
        cout << ", " << arr[i];
    }
    cout << "]" << endl;
}


int main() {
    uint64_t sizeArray = 0;
    cout << "Enter your number of size array: ";
    cin >> sizeArray;

    if (sizeArray == 0 || sizeArray % 2 == 0 || sizeArray > 100000) {
        cout << "Your number is incorrect!";
    }
    else {
        vector<int> arr(sizeArray);
        uint64_t tmp_evenNumber = 1;
        uint64_t tmp_oddNumber = sizeArray - 1;
        for (int i = 1; i < sizeArray; i++) {
            if(i % 2 != 0)
                arr[i] = tmp_oddNumber--;
            else if(i % 2 == 0)
                arr[i] = tmp_evenNumber++;
        }
        print_vector(arr);
    }

    return 0;
}
