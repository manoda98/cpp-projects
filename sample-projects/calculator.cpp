#include <iostream>
#include <cmath>

int main () {
    using namespace std;

    char operation;
    double num1;
    double num2;
    double result;


    cout << "*************CALCULATOR************* \n";

    cout << "Enter eithe (+ - * /) : ";
    cin >> operation;

    cout << "Enter num 1: ";
    cin >> num1;

    cout << "Enter num 2: ";
    cin >> num2;
    
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        cout << "Result : " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        cout << "Result : " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        cout << "Result : " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        cout << "Result : " << result << '\n';
        break;
    default:
        cout << "That wasn't a valid operator!!";
        break;
    }

    cout << "************************************";
    return 0;
}
