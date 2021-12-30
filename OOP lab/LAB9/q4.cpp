#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    int c;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;


    switch (op)
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
        try
        {
            if (num2 == 0)
                throw(c);
            else
                c = num1 / num2;
        }
        catch (int i)
        {
            cout << "Caught exception : int type " << endl;
        }
        break;

    default:
        cout << "Error! operator is not correct";
        break;
    }

    return 0;
}