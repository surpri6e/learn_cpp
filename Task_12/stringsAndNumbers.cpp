#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {

    string sequence;
    int needNum;

    cout << "Enter sequence number's: ";
    cin >> sequence;
    cout << "Enter number which to specify on symbol in sequence: ";
    cin >> needNum;

    cout << "Need number from sequence: " << sequence[needNum - 1] << endl;

    return 0;
}
