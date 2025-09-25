#include <iostream>
using namespace std;

int x, int y;
/*
void sum()
{
    double a, b, c;
    std::cout << "Программа сложения двух чисел.\n";
    std::cout << "Введите 1-е число: ";
    std::cin >> a;
    std::cout << "Введите 2-е число: ";
    std::cin >> b;
    if (a < 0 || b < 0)
        return;
    c = a + b;
    std::cout << a << " + " << b << " = " << c << "\n";
    return;
}
*/

int sum(int a, int b)
{
    int c = a + b;
    return c;
}


void printResult(int a, int b, int result)
{
    std::cout << a << " + " << b << " = "
        << result << "\n";
}

int main()
{
    setlocale(LC_ALL, "");
    double a, b;
    std::cout << "Программа сложения двух чисел.\n";
    std::cout << "Введите 1-е число: ";
    std::cin >> a;
    std::cout << "Введите 2-е число: ";
    std::cin >> b;
    sum(9, 4);
    int result = sum(5, 7);
    printResult(a, b, result);

    //int result1 = sum(result, 70);

}