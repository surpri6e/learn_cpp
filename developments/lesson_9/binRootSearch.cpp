#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

double f(double x) {
 return (x - 12.3456789) * (x - 0.123456789); //Can be changed
}

int main() {
 double a, b, middle, error;

 cout << "Enter boundaries [a, b]: ";
 cin >> a >> b;
 cout << "Enter needed error: ";
 cin >> error;

 if(f(a) * f(b) < 0) {
  
  while((b - a) / 2. > error) {

   middle = (a + b) / 2.;
   if(f(middle) == 0) {
    break;
   }

   if(f(a) * f(middle) < 0) {
    b = middle;
   }
   if(f(a) * f(middle) > 0) {
    a = middle;
   }
  }

  cout << "Answer: " << std::setprecision(15) << (a + b) / 2. << endl;
	
 } else {
  cout << "Can't use BinSearch of root. f(a) * f(b) >= 0";
 }

return 0;
}
