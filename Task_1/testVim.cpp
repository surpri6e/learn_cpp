#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void print_vector_names(const vector<string> &arr) {
 cout << "[" << arr[0];
 for(int i = 1; i < arr.size(); i++) {
  cout << ", " << arr[i];
 }
 cout << "]" << endl;
}

int main() {

 int sequence;
 cout << "Enter your size of sequence: ";

 sequence = (sequence > 0) ? sequence : (sequence < 0) ? -sequence : 3;

 vector<string> arrayOfNames(sequence);

 for(int i = 0; i <= sequence; i++) {
  string name;
  cin >> name;
  arrayOfNames[i] = name;
 }

 print_vector_names(arrayOfNames);
}
