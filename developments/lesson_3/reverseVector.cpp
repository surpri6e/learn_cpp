#include <iostream>
#include <vector>
using namespace std;

void print_vector(const vector<int> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << '\t';
    }
    cout << endl;
}


int main() {
    vector<int> A(11);
    for(int i = 0; i < A.size(); i++) {
        A[i] = i * 10;
    }
    print_vector(A);

    // Simple reverse array A
    for(int i = 0; i < A.size() / 2; i++) {
        auto tmp_end = A[A.size() - 1 - i];
        auto tmp_start = A[i];
        A[i] = tmp_end;
        A[A.size() - 1 - i] = tmp_start;
        // swap(A[i], A[A.size() - 1 - i]);
    }
    print_vector(A);

    return 0;
}
