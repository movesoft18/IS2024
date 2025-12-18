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
	//len = len / 8 + (len % 8 != 0); // 1 бит на пиксел (монохромное)
	//len = len / 2 + (len % 2 != 0); // 4 бит на пиксел (16 цветов)
	//len = len; // 8 бит на пиксел (256 цветов)
	len = len*3; // 24 бит на пиксел (16777216 цветов)
	cout << "Байт данных = " << len << endl;
	if (len % 4 == 0)
		len1 = len;
	else
		len1 = len / 4 * 4 + 4;
	//len1 = len / 4 * 4 + (len % 4 == 0 ? 0 : 4);
	cout << "Длина строки = " << len1 << endl;

}

