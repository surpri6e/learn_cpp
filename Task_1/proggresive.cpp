#include <iostream>
using namespace std;

int main() {

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
