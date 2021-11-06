#include <iostream>
#include <climits>
using namespace std;

int main() {

    int pairProduction = INT_MAX;
    int minProduction = INT_MAX;

    int arr_size = 6;
    int arr_end = 0;
    int arr[arr_size];

    int current;
    int numberLeavingQueue = 0;
    int minFromBypassedNumbers = 10001;

    int N = 0;
    cout << "How numbers will be in subsequence: ";
    cin >> N;

    for(int i = 0; i < arr_size; i++)
        cin >> arr[i];


    for(int i = arr_size; i < N; i++){
        cin >> current;

        numberLeavingQueue = arr[arr_end];
        arr[arr_end++] = current;

        if(arr_end > arr_size)
            arr_end = 0;

        if(numberLeavingQueue % 2 != 0 && numberLeavingQueue < minFromBypassedNumbers)
            minFromBypassedNumbers = numberLeavingQueue;

        if(current % 2 != 0)
            pairProduction = minFromBypassedNumbers * current;

        if(pairProduction < minProduction)
            minProduction = pairProduction;
    }

    if(pairProduction == INT_MAX)
        cout << "Your primary have not solution => -1!\n";
    else if (minProduction >= 1 && minProduction < LLONG_MAX)
        cout << "Min Production = " << minProduction << ".\n";

    return 0;
}
