#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> B(10);
    for(int i = 0; i < B.size(); i++) {
        B[i] = B.size() - i;
        cout << B[i] << '\t';
    }

    return 0;
}
