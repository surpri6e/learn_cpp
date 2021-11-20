#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int N;
    cin >> N;

    N = (N > 0) ? N : (N == 0) ? 1 : -N;

    vector<string> names(N);
    vector<int> ages(N);

    for(int i = 0; i < N; i++) {
        string name;
        int age;
        cin >> name;
        cin >> age;
        names[i] = name;
        ages[i] = age;
    }

    int maxAge = -1;
    for(int i = 0; i < N; i++) {
        maxAge = max(maxAge, ages[i]);
    }

    for(int i = 0; i < N; i++) {
        if(ages[i] == maxAge) {
            cout << names[i] << endl;
        }
    }

    return 0;
}
