// Program to display the multiplication table of the given number
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;

    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
