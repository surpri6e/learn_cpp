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
    int counter;
};

int main() {

    int sequence;
    const int diapason = 100;
    vector<int> arrayOfCounters(diapason);
    vector<Person> arrayOfPersons;
    int maxCounterVal = -1;

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
        for(int j = 0; j < arrayOfPersons.size(); j++) {
            if(arrayOfCounters[tmp.age] > arrayOfPersons[i].counter && arrayOfPersons[i].age == tmp.age) {
                arrayOfPersons[j].counter++;
            }
        }
    }

    for(int i = 0; i < diapason; i++) {
        if(arrayOfCounters[i] > maxCounterVal) {
            maxCounterVal = arrayOfCounters[i];
        }
    }

    for(int i = 0; i < diapason; i++) {
        if(maxCounterVal == arrayOfPersons[i].counter) {
            cout << arrayOfPersons[i].name << endl;
            cout << arrayOfPersons[i].lastName << endl;
        }
    }

}
