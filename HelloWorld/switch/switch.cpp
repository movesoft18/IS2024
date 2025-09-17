#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    double a, b, c = 0;
    char operation;
    bool needCalculation = true;
    cout << "Введите через пробел первое число, операцию, второе число: ";
    cin >> a >> operation >> b;

    switch (operation)
    {
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
    case '\\':
        c = a / b;
        break;
    case '^':
        c = pow(a, b);
        break;
    default:
        needCalculation = false;
        break;
    }
    if (needCalculation)
    {
        cout << a << " " << operation << " " << b
            << " = " << c << endl;
    }
    else
    {
        cout << "Неверная операция\n";
    }
}




/*
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    double a, b, c;
    char operation;
    cout << "Введите через пробел первое число, операцию, второе число: ";
    cin >> a >> operation >> b;
    if (operation == '+')
    {
        c = a + b;
    }
    else if (operation == '-')
    {
        c = a - b;
    }
    else if (operation == '*')
    {
        c = a * b;
    }
    else if (operation == '/')
    {
        c = a / b;
    }
    else
    {
        cout << "Неверная операция\n";
    }
    cout << a << " " << operation << " " << b
        << " = " << c << endl;
}
*/