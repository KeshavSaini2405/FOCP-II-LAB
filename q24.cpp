#include <iostream>
using namespace std;

int main() {
    for (char ch = 'A'; ch <= 'E'; ch++) {
        for (char c = 'A'; c <= ch; c++) {
            cout << c;
        }
        cout<<"\n"; }
    return 0;}
