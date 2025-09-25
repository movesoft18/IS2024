#include <iostream>
using namespace std;

long long factorial(int n)
{
	unsigned long long f = 1;
	for (int i = 2; i <= n; i++)
	{
		f *= i;
	}
	return f;
}

long long sum(int n)
{
	unsigned long long f = 0;
	for (int i = 1; i <= n; i++)
	{
		f += i;
	}
	return f;
}

int main()
{
	setlocale(LC_ALL, "");
	//cout << "Программа вычисления факториала n!\n";
	//cout << "Введите n: ";
	//int n;
	//cin >> n;
	//cout << "Факториал " << n << 
	//	"! = " << factorial(n) << endl;

	for (int i = 0; i <= 15; i++)
		cout << "Факториал " << i <<
			"! = " << factorial(i) << endl;
	for (int i = 1; i <= 15; i++)
		cout << "Сумма чисел от 1 до " << i <<
		" = " << sum(i) << endl;
}

