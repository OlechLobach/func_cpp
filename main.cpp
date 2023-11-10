#include <iostream>

using namespace std;

int maxNumber(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int result = maxNumber(num1, num2);

    cout << "The maximum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}