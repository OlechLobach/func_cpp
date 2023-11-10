#include <iostream>

using namespace std;

int cube(int n) {
    return n * n * n;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = cube(num);

    cout << "Cube of " << num << ": " << result << endl;

    return 0;
}
