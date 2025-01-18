// Program to perform basic arithmetic operations
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter the operation that you want to perform:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n== ";
    cin >> choice;

    int n1, n2;
    cout << "Enter the numbers for operations: ";
    cin >> n1 >> n2;

    switch (choice) {
        case 1:
            cout << "Addition is = " << n1 + n2 << endl;
            break;
        case 2:
            cout << "Subtraction is = " << n1 - n2 << endl;
            break;
        case 3:
            cout << "Multiplication is = " << n1 * n2 << endl;
            break;
        case 4:
            if (n2 != 0)
                cout << "Division is = " << n1 / n2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        case 5:
            if (n2 != 0)
                cout << "Modulus is = " << n1 % n2 << endl;
            else
                cout << "Error: Modulus by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

