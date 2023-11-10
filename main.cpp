#include <iostream>

using namespace std;

bool isPerfect(int number) {
    int sum = 1; 

    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
}

void findPerfectNumbers(int start, int end) {
    cout << "Perfect numbers in the interval [" << start << ", " << end << "]: ";

    for (int i = start; i <= end; ++i) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    findPerfectNumbers(start, end);

    return 0;
}