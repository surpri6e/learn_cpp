#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

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

ostream& operator << (ostream &out, Person &tmp) {
    out << "{Age: " << tmp.age << "}, ";
    return out;
}

int main() {

    int sequence;
    const int diapason = 100;
    vector<int> arrayOfCounters(diapason);
    int maxCounterVal = -1;
    int maxCounterAge = -1;

    cout << "Enter your number which shows amount sequence: ";
    cin >> sequence;

    sequence = (sequence > 0) ? sequence : (sequence < 0) ? -sequence : 5;
    vector<Person> arrayOfPersons(sequence);

    for(int i = 0; i < sequence; i++) {
        Person tmp;

        cout << "Name: ";
        cin >> tmp.name;
        cout << "LastName: ";
        cin >> tmp.lastName;
        cout << "Age: ";
        cin >> tmp.age;

        assert(tmp.age >= 0 && tmp.age < diapason);
        arrayOfPersons[i] = tmp;
        arrayOfCounters[tmp.age]++;
    }

    for(int i = 0; i < diapason; i++) {
        if(arrayOfCounters[i] > maxCounterVal) {
            maxCounterVal = arrayOfCounters[i];
            maxCounterAge = i;
        }
    }

    // I think, this error bound with operator - cout. I must check this problem in video.

    for(int i = 0; i < arrayOfPersons.size(); i++) {
        // cout << arrayOfPersons[i];

        if(maxCounterAge == arrayOfPersons[i].age) {
            cout << "{Name: " << arrayOfPersons[i].name << ", lastName: " << arrayOfPersons[i].lastName << "}" << endl;
        }
    }

}
