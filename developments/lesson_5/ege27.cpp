#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> &arr) {
    cout << "[" << arr[0];
    for(int i = 1; i < arr.size(); i++)
        cout << ", " << arr[i];
    cout << "]\n";
}


int main() {

    const int N = 10;
    int maxSum = -1;
    vector<int> mainArray(N);

    for(int i = 0; i < N; i++)
        cin >> mainArray[i];

    for(int i = 0; i < N; i++) {
        for(int j = i + 5; j < N; j++) {
            int pairSum = mainArray[i] + mainArray[j];
            if(pairSum > maxSum)
                maxSum = pairSum;
        }
    }
    cout << maxSum << '\n';

    return 0;
}
