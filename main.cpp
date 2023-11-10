#include <iostream>

using namespace :: std;

bool isLuckyNumber(int number) {
    int sumFirstHalf = 0;
    int sumSecondHalf = 0;

    for (int i = 0; i < 3; ++i) {
        sumFirstHalf += number % 10;
        number /= 10;
    }

   
    for (int i = 0; i < 3; ++i) {
        sumSecondHalf += number % 10;
        number /= 10;
    }

    return sumFirstHalf == sumSecondHalf;
}

int main() {
    int number;

    cout << "Enter a six-digit number: ";
    cin >> number;

    if (isLuckyNumber(number)) {
        cout << number << " is a lucky number!" << endl;
    }
    else {
        cout << number << " is not a lucky number." << endl;
    }

    return 0;
}
