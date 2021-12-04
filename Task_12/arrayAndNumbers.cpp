#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int generator(int gen, int mod) {
 unsigned int num = gen * 1675167247124871 + 6124124;
 unsigned int retNum = num / 23153 % mod;
 if(retNum == 0) {
  generator(num += 5, 100);
 }

 return retNum;
}

void print_array(const vector<int> &arr) {
 cout << "[" << arr[0];
 for(int i = 1; i < arr.size(); i++) {
  cout << ", " << arr[i];
 }
 cout << "]" << endl;
}

void DeleteZero(int counter, vector<int> &arr) {
 if(counter != 0) {
  for(int i = 0; i < arr.size(); i++) {
   if(arr[i] == 0) {
    counter--;
    arr.erase(arr.begin() + i);
   }
  }
  DeleteZero(counter, arr);
 } else if (counter == 0) {
  return;
 }
}

int main() {

 int arr_size;
 cout << "Enter size of your array: ";
 cin >> arr_size;

 int counterZeroInArray = 0;

 arr_size = (arr_size > 0) ? arr_size : (arr_size < 0) ? -arr_size : 3;

 vector<int> arr(arr_size);

 for(int i = 0; i < arr_size; i++) {
  arr[i] = generator(arr_size + i, 100);
 }

 for(int i = 0; i < arr_size; i++) {
  if(arr[i] % 2 == 0) {
   arr[i] = 0;
  }
 }

 //print_array(arr);

 for(int i = 0; i < arr_size; i++) {
  if(arr[i] == 0) {
   counterZeroInArray++;
  }
 }

 DeleteZero(counterZeroInArray, arr);

 //print_array(arr);

 return 0;
}
