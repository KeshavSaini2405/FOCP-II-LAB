#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        cout << "Invalid triangle";
    }
    else if (a == b && b == c) {
        cout << "\nEquilateral triangle";
    }
    else if (a == b || b == c || a == c) {
        cout << "\nIsosceles triangle";
    }
    else {
        cout << "\nScalene triangle" ;
    }
    return 0;
}
