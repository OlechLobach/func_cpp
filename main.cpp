#include <iostream>

using namespace :: std;

int calculateSumInRange(int start, int end) {
    int sum = 0;

    for (int i = start; i <= end; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    int result = calculateSumInRange(start, end);

    cout << "Sum of numbers in the range: " << result << endl;

    return 0;
}