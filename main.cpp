#include <iostream>

using namespace :: std;

bool isPositive(int num) {
    return num > 0;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPositive(num)) {
        cout << num << " is positive." << endl;
    }
    else {
        cout << num << " is negative." << endl;
    }

    return 0;
}
