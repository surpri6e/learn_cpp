#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void print_number(const vector<int> &arr) {
 for(int i = 0; i < arr.size(); i++)
  cout << arr[i];
}

int main() {

 const int BASE = 16;
 int number_BASE_10;
 string nubmer_BASE_16;

 cout << "Enter your number in system base ten: ";
 cin >> number_BASE_10;

 number_BASE_10 = (number_BASE_10 > 0) ? number_BASE_10 : (number_BASE_10 < 0) ? -number_BASE_10 : 3;
 
 vector<int> digitFromDivision;

 if(number_BASE_10 < BASE) {
  cout << "Error!";
 }

 char simbols = {'A', 'B', 'C', 'D', 'E', 'F',};

 while(baseNumber_10 != 1) {
  int numberInArray = number_BASE_10 % BASE;
  number_BASE_10 /= BASE;
  
 }

 for(int i = 0; i < digitFromDivision.size() / 2; i++) {
  int tmp_end = digitFromDivision[digitFromDivision.size() - i - 1];
  int tmp_start = digitFromDivision[i];
  digitFromDivision[tmp_start] = tmp_end;
  digitFromDivision[tmp_end] = tmp_start;
 }

 cout << "Number in sixteen base system: " << number_BASE_16 << endl;
}
