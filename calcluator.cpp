#include <iostream>
#include <string>
using namespace std;

int main()
{
    double number1, number2;
    char ope;
    cout << "Enter The First Number : ";
    cin >> number1;
    cout << "Enter The Operator  (+,-,*,/,%) : ";
    cin >> ope;

    cout << "Enter The Second Number : ";
    cin >> number2;

    if (ope == '+')
    {
        cout <<"Result " << number1 + number2;
    }
    else if (ope == '-')
    {
        cout <<"Result " << number1 - number2;
    }
    else if (ope == '*')
    {
        cout <<"Result " << number1 * number2;
    }
    else if (ope == '/')
    {
        if (number2 != 0)
        {
            cout <<"Result " << number1 / number2;
        }
        else
        {
            cout << "Error: You Can Not Divide By Zero ";
        }
    }
    else
    {
        cout << "Invalid Operator! Plese Enter The Valid Operator (+,-,*,/) ";
    }

     return 0;
}