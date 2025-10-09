#include <iostream>
using namespace std;

int x, y;

int sum(int, int);
void printResult(int, int, int);

int main()
{
    setlocale(LC_ALL, "");
    double a, b;
    std::cout << "Программа сложения двух чисел.\n";
    std::cout << "Введите 1-е число: ";
    std::cin >> a;
    std::cout << "Введите 2-е число: ";
    std::cin >> b;
    //sum(9, 4);
    int result = 6 + sum(5, 7) * 10;
    printResult(a, b, result);
    //int result1 = sum(result, 70);
}

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