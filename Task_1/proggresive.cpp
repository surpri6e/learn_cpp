#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    
   string s;
   cin >> s;
   cout << s << endl;
   


	
    /*������ ��� ���� ������� ����� ������� � ��������� ��������� ��������� � ����������*/
    while (true) {
        int i;
        int stack;
        int last;

        cin >> i;
        if (i > 0) {
            last = stack;
            stack = i;
        }

        if (i == 0) {
            cout << stack - last << '\n';
            break;
        }
        cout << "Last is " << last << '\n';
    }

    return 0;

}
