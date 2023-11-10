#include <iostream>
#include <cmath>

using namespace std;

double calculatePower(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = calculatePower(base, exponent);

    cout << "Result: " << result << endl;

    return 0;
}