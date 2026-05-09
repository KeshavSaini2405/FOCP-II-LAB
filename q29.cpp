
#include <iostream>
using namespace std;

int main() {
    int temp[30];
    int minTemp;

    cout << "Enter temperatures for 30 days:\n";
    for (int i = 0; i < 30; i++) {
        cin >> temp[i];
    }
    minTemp = temp[0];
    for (int i = 1; i < 30; i++) {
        if (temp[i] < minTemp) {
            minTemp = temp[i];
        }}
    cout << "Minimum temperature of the month = " << minTemp;
    return 0;
}
