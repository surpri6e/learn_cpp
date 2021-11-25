#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

// гюбеярх мю назейре ябни янаярбеммши яв╗рвхй
struct Person {
    string name;
    string lastName;
    int age;
};

void print_vector(const vector<int> &arr) {
    cout << "[" << arr[0];
    for(int i = 1; i < arr.size(); i++) {
        cout << "," << arr[i];
    }
    cout << "]" << endl;
}

int main() {

    int sequence;
    const int diapason = 100;
    vector<int> arrayOfCounters(diapason);
    vector<Person> arrayOfPersons;
    int maxCounterVal = -1;
    int maxCounterAge = -1;

    cout << "Enter your number which shows amount sequence: ";
    cin >> sequence;

    sequence = (sequence > 0) ? sequence : (sequence < 0) ? -sequence : 5;

    for(int i = 0; i < sequence; i++) {
        Person tmp;

        cout << "Name: ";
        cin >> tmp.name;
        cout << "LastName: ";
        cin >> tmp.lastName;
        cout << "Age: ";
        cin >> tmp.age;

        assert(tmp.age >= 0 && tmp.age < diapason);
        arrayOfCounters[tmp.age]++;
    }

    print_vector(arrayOfCounters);

    for(int i = 0; i < diapason; i++) {
        if(arrayOfCounters[i] > maxCounterVal) {
            maxCounterVal = arrayOfCounters[i];
            maxCounterAge = i;
        }
    }

    cout << maxCounterAge << " --- " << maxCounterVal << endl;

    // I think, this error bound with operator - cout. I must check this problem in video.
    cout << arrayOfPersons[0].age << " " << arrayOfPersons[1].age << " " << arrayOfPersons[2] << endl; // Its

    for(int i = 0; i < arrayOfPersons.size(); i++) {
        // arrayOfCounters[i] == maxCounterVal
        // maxCounterAge == arrayOfPersons[i].age
        int age = arrayOfPersons[i].age;
        cout << age << endl;

        if(maxCounterAge == arrayOfPersons[i].age) {
            cout << arrayOfPersons[i].name << endl;
            cout << arrayOfPersons[i].lastName << endl;
        }
    }

}
