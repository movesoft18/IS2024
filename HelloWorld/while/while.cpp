// for.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	cout << "Программа вычисления суммы ряда от 1 до n\n";
	cout << "Введите n: ";
	unsigned long long s = 0;
	int n;
	cin >> n;
	int i = 1;
	while (i <= n)
	{
		s += i++;
	}
	cout << "Сумма чисел от 1 до " << 
		n << " = " << s << endl;
}
/*
	while (0)
	{
	}

	while (true)
	{
		// ...
		if (key == 27) break;
		// ...
	}


*/
