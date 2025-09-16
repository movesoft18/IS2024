#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    double a, b, c;
    //std::cout << "Программа сложения двух чисел.\n";
    std::cout << "Введите 1-е число: ";
    std::cin >> a;
    std::cout << "Введите 2-е число: ";
    std::cin >> b;
    c = a + b;
    //std::cout << a << " + " << b << " = " << c << "\n";
    std::cout << "Сумма = " << c << std::endl;
}

/*

int c = a >> 2;
int d = b << 3;

 10101
&
 10011
 -----
 10001

 10101
|
 10011
 -----
 10111

 10101
^
 10011
 -----
 00110

~10011 = 01100


int a = 10;
int b = 20;

a += b;  // a = a + b;
a -= b;
a *= b;
a /= b;
a %= b;

a ^= b;

int a = 10, b = 20;
int c = a < b ? a : b;


*/