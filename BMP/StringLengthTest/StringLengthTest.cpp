// StringLengthTest.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int len, len1;
	cout << "Введите число: ";
	cin >> len;
	//len = len / 8 + (len % 8 != 0 ? 1 : 0); // для монохромного
	//len = len / 2 + (len % 2 != 0 ? 1 : 0); // для 16-ти цветного
	//len = len; // для 256 цветного изображения
	len = len * 3; // для 16777215 цветного изображения
	cout << "Использовано байт: " << len << endl;
	if (len % 4 != 0)
	{
		len1 = len / 4 * 4 + 4;
	}
	else
		len1 = len;
	//len1 = len / 4 * 4 + (len % 4 != 0 ? 4 : 0);
	cout << "Длина строки = " << len1 << endl;

}

