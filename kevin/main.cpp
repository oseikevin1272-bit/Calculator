#include <iostream>
#include <iomanip>


using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a-b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}


int main() {

    char op;
    double x{};
    double y{};

    cout << "Enter operation (+,-,*,/): ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    if (x == 0 && y == 0) {
        cout << "Error!" << endl;
    }

    double result;

    switch (op) {
        case '+':
            result = add(x,y);
            break;
        case '-':
            result = subtract(x,y);
            break;
        case '*':
            result = multiply(x,y);
            break;
        case '/':
            result = divide(x,y);
            break;

        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << fixed << setprecision(2) << endl;
    cout << "Result: " << result << endl;











    return 0;
}



 