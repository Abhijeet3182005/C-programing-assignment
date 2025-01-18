// Program to find the largest of three numbers
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Enter the 3 numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2 && n1 > n3)
        cout << n1 << " is the largest number." << endl;
    else if (n2 > n1 && n2 > n3)
        cout << n2 << " is the largest number." << endl;
    else if (n3 > n1 && n3 > n2)
        cout << n3 << " is the largest number." << endl;
    else
        cout << "There is no single largest number." << endl;

    return 0;
}

