#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_stack(const vector<char> &arr) {
    cout << "[ " << arr[0];
    for(int i = 1; i < arr.size(); i++) {
        cout << ", " << arr[i];
    }
    cout << " ]" << endl;
}

int main() {

    string s;
    cout << "Enter braces sequence: ";
    cin >> s;

    vector<char> stackChar;

    for(char symbol: s) {
        if(symbol == '(' || symbol == '[') {
            stackChar.push_back(symbol);
        }
        if(symbol == ')' || symbol == ']') {
            if(stackChar.size() == 0) {
                cout << "This sequence is incorrect!";
                break;
            }
            char lastSymbol = stackChar[stackChar.size() - 1];
            if(lastSymbol == '(' && symbol == ')') {
                stackChar.pop_back();
                continue;
            } else if(lastSymbol == '(' && symbol == ']') {
                cout << "This sequence is incorrect!";
                break;
            } else if(lastSymbol == '[' && symbol == ']') {
                stackChar.pop_back();
                continue;
            } else if(lastSymbol == '[' && symbol == ')') {
                cout << "This sequence is incorrect!";
                break;
            } else {
                cout << "This sequence is incorrect!";
                break;
            }
        }
    }

    if(stackChar.size() == 0) {
        cout << "This sequence is correct!";
    } else {
        cout << "This sequence is incorrect!";
    }

    return 0;
}
