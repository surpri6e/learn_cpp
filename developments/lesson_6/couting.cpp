#include <iostream>
#include <vector>
using namespace std;


int main() {

    const int N = 10;
    int counter_1number = 0;
    int counter_5number = 0;
    int countNumber = 0;

    for(int i = 0; i < N; i++) {
        cin >> countNumber;

        if(countNumber == 1)
            counter_1number++;
        else if(countNumber == 5)
            counter_5number++;
    }

    cout << "Numbers 1 in count is " << counter_1number << ".\n";
    cout << "Numbers 5 in count is " << counter_5number << ".\n";


    return 0;
}
