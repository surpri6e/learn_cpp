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
    if (sizeArray == 0 || sizeArray % 2 == 0 || sizeArray > 1000)
        cout << "Your number is incorrect!";
    else if (sizeArray == 3) {
        vector<int> arr(sizeArray);
        for(int i = 0; i < sizeArray; i++)
            arr[i] = i;
        swap(arr[sizeArray - 1], arr[sizeArray - 2]);
        print_vector(arr);
    }
    else {
        vector<int> arr(sizeArray);
        int tmp_evenNumber = 1;
        int tmp_oddNumber = sizeArray - 1;
        for (int i = 0; i < sizeArray; i++) {
            if (i == 0)
                arr[i] = 0;
            else if (i % 2 != 0)
                arr[i] = tmp_oddNumber--;
            else
                arr[i] = tmp_evenNumber++;
        }
    print_vector(arr);
    }


    return 0;
}
