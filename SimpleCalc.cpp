#include <iostream>
using namespace std;

int main()
{
    char Operator;
    float num1, num2;

    cout << "Enter two Operands: ";
    cin >> num1 >> num2;

    cout << "Enter an Operator: +, -, *, / : ";
    cin >> Operator;

    switch (Operator)
    {

    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    default:
        cout << "Error! operator is not valid";
        break;
    }

    return 0;
}