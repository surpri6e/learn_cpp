#include <iostream>
#include <string>

//using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

 string sequence = "Street: ";

 int cherryGreen, cherryWhite;
 cout << "Enter number green and white cherries: ";
 cin >> cherryGreen >> cherryWhite;

 if(cherryGreen == 0 && cherryWhite == 0) {
  cout << "Street is clear!" << endl;
 }

 if(cherryGreen == 0 && cherryWhite > 0) {
  sequence.push_back('B');
 }

 if(cherryGreen > 0 && cherryWhite == 0) {
  while(cherryGreen != 0) {
   sequence.push_back('C');
   cherryGreen--;
  }
 }


 if(cherryGreen > cherryWhite) {
  sequence.push_back('B');
  cherryWhite--;
  while(cherryGreen != 0 && cherryWhite != 0) {
   if(sequence.back() == 'B') {
    sequence.push_back('C');
    cherryGreen--;
   }
   if(sequence.back() == 'C') {
    sequence.push_back('B');
    cherryWhite--;
    if(cherryWhite == 0) {
        while(cherryGreen != 0) {
            sequence.push_back('C');
            cherryGreen--;
        }
        break;
    }
   }
  }
 }

 if(cherryGreen < cherryWhite) {
  sequence.push_back('B');
  cherryWhite--;
  while(cherryGreen != 0 && cherryWhite != 0) {
    if(sequence.back() == 'B') {
     if(cherryGreen == 0) {
        break;
     }
    sequence.push_back('C');
    cherryWhite--;
   }
   if(sequence.back() == 'C') {
     sequence.push_back('B');
     cherryGreen--;
   }
  }
 }


 if(cherryGreen == cherryWhite) {
  sequence.push_back('C');
  cherryGreen--;
  while(cherryGreen != 0 && cherryWhite != 0) {
   if(sequence.back() == 'C') {
    sequence.push_back('B');
    cherryWhite--;
   }
   if(sequence.back() == 'B') {
    sequence.push_back('C');
    cherryGreen--;
    if(cherryGreen == 0) {
        sequence.push_back('B');
    }
   }
  }
 }

 cout << sequence << endl;

 return 0;
}
