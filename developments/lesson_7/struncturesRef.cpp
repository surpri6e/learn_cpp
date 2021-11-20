#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    int N;
    cin >> N;

    N = (N > 0) ? N : (N == 0) ? 1 : -N;

    vector<Person> arrayOfPersons(N);

    for(int i = 0; i < N; i++) {
        Person one;
        cin >> one.name;
        cin >> one.age;
        arrayOfPersons[i] = one;
    }

    int maxAge = -1;
    for(int i = 0; i < N; i++) {
        maxAge = max(maxAge, arrayOfPersons[i].age);
    }

    for(int i = 0; i < N; i++) {
        if(maxAge == arrayOfPersons[i].age) {
            cout << arrayOfPersons[i].name << endl;
        }
    }

    return 0;
}
