#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double a, b, c, discriminant, x1, x2; // ќбъ€вл€ем переменные с плавающей точкой.

    cout << "Enter your a number: ";
    cin >> a;
    cout << "Enter your b number: ";
    cin >> b;
    cout << "Enter your c number: ";
    cin >> c;

    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        x1 = ((-b) + sqrt(discriminant)) / (2 * a);
        x2 = ((-b) - sqrt(discriminant)) / (2 * a);
        cout << "First x = " << x1 << ".\n";
        cout << "Second x = " << x2 << ".\n";
    }

    if (discriminant == 0) {
        x1 = -(b / (2 * a));
        cout << "First x = Second x = " << x1 << "\n";
    }

    if (discriminant < 0) {
        cout << "Discriminant < 0, equations have not solutions";
    }

    return 0;
}
