#include <iostream>
using namespace std;

void calculator(int number1, int number2, char a);

main()
{
    int number1, number2;
    cout << "Enter your first number:";
    cin >> number1;
    cout << "Enter your second number:";
    cin >> number2;
    char a;
    cout << "Select your operators (+ , - , * , / , % ):";
    cin >> a;
    calculator(number1, number2, a);
}

void calculator(int number1, int number2, char a)
{

    if (a == '+')
    {
        int result;
        result = number1 + number2;
        int result2;
        result2 = result % 2;
        if (result2 == 0)
        {
            cout << result << " "<< "Even";
        }
        else

        {
            cout << result << " "<< "Odd";
        }
    }

    if (a == '-')
    {
        int result;
        result = number1 - number2;
        int result2;
        result2 = result % 2;
        if (result2 == 0)
        {
            cout << result << " "<< "Even";
        }
        else

        {
            cout << result << " "<< "Odd";
        }
    }

    if (a == '*')
    {
        int result;
        result = number1 * number2;
        cout << result;
    }

    if (a == '/' && number2!=0)
    {
        float result;
        result = number1 / number2;
        cout << result;
    }

    if (a == '/' && number2==0)
    {
        cout << "Can not divide by" << " " << number2;
    }

    if (a == '%' && number2!=0)

    {
        int result1;
        result1 = number1 % number2;
        cout << result1;
    }

    if (a == '%' || number2 == 0)
    {
        cout << "Can not divide by" << " " << number2;
    }
}