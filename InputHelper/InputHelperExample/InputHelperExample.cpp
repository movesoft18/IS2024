#include <iostream>
#include <InputHelper.h>
using namespace std;

void Calculate1()
{
    double a = 0, b = 0, c = 0, d = 0;
    bool r = InputValue("Введите коэффициент a:", a); // просим ввести a
    if (!r) goto error; // если возвращено false - переходим к обработке ошибок в секцию с меткой error
    r = InputValue("Введите коэффициент b:", b); // просим ввести b
    if (!r) goto error; // если возвращено false - переходим к обработке ошибок в секцию с меткой error
    r = InputValue("Введите коэффициент c:", c); // просим ввести a
    if (!r) goto error; // если возвращено false - переходим к обработке ошибок в секцию с меткой error
    d = b * b - 4 * a * c;
    cout << " d = " << d << endl;
    return;
error:
    cout << "Ошибка ввода данных, вычисление невозможно";
}

int main()
{
    setlocale(LC_ALL, "");
    Calculate1();
}