#include <iostream>
using namespace std;

int main() {
    //Cycle queue on array, very effective and fast algorithm
    const int queueArray_size = 5;
    int queueArray_end = 0;
    int queueArray[queueArray_size];
    int N = 10;
    int maxSum = -1;
    int pairSum = -1;
    int numberLeavingQueue;
    int current;
    int maxFromBypassedNumbers = -1;

    for(int i = 0; i < queueArray_size; i++)
        cin >> queueArray[i];

    for(int i = queueArray_size; i < N; i++) {
        cin >>  current;
        numberLeavingQueue = queueArray[queueArray_end];
        queueArray[queueArray_end++] = current;
        if(queueArray_end > queueArray_size)
            queueArray_end = 0;

        if(numberLeavingQueue > maxFromBypassedNumbers)
            maxFromBypassedNumbers = numberLeavingQueue;

        pairSum = current + maxFromBypassedNumbers;

        if(pairSum > maxSum)
            maxSum = pairSum;

    }

    cout << "Max sum = " << maxSum << '\n';

    return 0;
}
