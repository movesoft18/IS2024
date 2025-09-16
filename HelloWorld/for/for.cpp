// for.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	cout << "Программа вычисления факториала n!\n";
	cout << "Введите n: ";
	unsigned long long f = 1;
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		//f = f * i;
		f *= i;
	}
	cout << n << "! = " << f << endl;
}


/*

	for (;;)
	{
	 // бесконечный цикл
	}

	for (; i <= n;)
	{

	}
*/