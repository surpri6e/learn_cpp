#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> &A) {
    cout << "[";
    if (A.size() > 0)
        cout << A[0];
    for(int i = 1; i < A.size(); i++) {
        cout << '\t' << A[i];
    }
    cout << "]\n";
}

void shift_left(vector<int> &A) {
    //LEFT
    int tmp_leftShift = A[0];
    for(int i = 0; i < A.size() - 1; i++) {
        A[i] = A[i + 1];
    }
    A[A.size() - 1] = tmp_leftShift;
}

void rigth_shift(vector<int> &A) {
    //RIGTH
    int tmp_rigthShift = A[A.size() - 1];
    for(int i = A.size() - 2; i >= 0; i--) {
        A[i + 1] = A[i];
    }
    A[0] = tmp_rigthShift;
}

int main() {
    //Cycled shift in right or left, algorithm
    vector<int> A;
    int N = 12;
    A.resize(N);
    for(int i = 0; i < A.size(); i++)
        A[i] = i;

    shift_left(A);
    rigth_shift(A);
    print_vector(A);

    return 0;
}
