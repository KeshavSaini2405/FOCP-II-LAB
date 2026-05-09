
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    int upper = 0, lower = 0, digit = 0, special = 0;
    cout << "Enter password: ";
    cin >> password;

    for (int i = 0; i < password.length(); i++) {
        char ch = password[i];

        if (ch >= 'A' && ch <= 'Z') {
            upper = 1;
        }
        else if (ch >= 'a' && ch <= 'z') {
            lower = 1;
        }
        else if (ch >= '0' && ch <= '9') {
            digit = 1;}
        else if (ch == '@' || ch == '#' || ch == '$' ||
                 ch == '%' || ch == '!' || ch == '&' || ch == '*') {
            special = 1;
        }}
    if (upper == 1 && lower == 1 && digit == 1 && special == 1) {
        cout << "Password is valid";
    } else {
        cout << "Password is invalid";
    }
    return 0;
}
