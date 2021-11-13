#include <iostream>
using namespace std;

int main() {
    const char simbol = '*';
    const int piramide = 7;
    int counter = piramide;


    for(int i = 0; i < piramide; i++) {

        if(i < piramide / 2) {
            for(int j = 0; j < i; j++) {
                cout << " ";
            }
            for(int j = 0; j < counter; j++) {
                cout << simbol;
            }

            counter -= 2;
        }

        if(i + 1 > piramide / 2) {
            for(int j = i + 1; j > counter; j--) {
                cout << " ";
            }
            for(int j = 0; j < counter; j++) {
                cout << simbol;
            }

            counter += 2;
        }

        cout << endl;
    }

    return 0;
}
