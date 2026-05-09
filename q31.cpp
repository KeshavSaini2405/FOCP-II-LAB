#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int count = 0;
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];

        if (arr[i] % 3 == 0 && arr[i] % 5 == 0) {
            count = count + 1;
        }}
    cout << "Count of numbers divisible by 3 and 5 = " << count;
    return 0;
}
