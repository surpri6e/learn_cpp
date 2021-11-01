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
    vector<int> B(10);
    for(int i = 0; i < B.size(); i++) {
        B[i] = i;
    }
    // vector<int> C(B); - CopyPast B array
    print_vector(B);

    vector<int> Q(10);
    for(int i = 0; i < B.size(); i++) {
        Q[i] = B[B.size() - 1 - i]; // Reverse B array and place reversed array in Q array
    }
    print_vector(Q);

    return 0;
}
