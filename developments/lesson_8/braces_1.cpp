#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cout << "Enter braces sequence: ";
    cin >> s;

    int counter = 0;

    for(char symbol: s) {
        if(symbol == '(') {
            counter++;
        } else if(symbol == ')') {
            counter--;
            if(counter < 0) {
                break;
            }
        }
    }

    if(counter == 0) {
        cout << "This sequence is correct!";
    } else {
        cout << "This sequence is incorrect!";
    }

    return 0;
}
