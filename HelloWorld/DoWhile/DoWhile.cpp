#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int age = 0;
    do
    {
        cout << "Введите ваш возраст (6-100): ";
        cin >> age;
        if (age <= 5 || age > 100)
            cout << "Введен некорректный возраст.\n";
    } while (age <= 5 || age > 100);

    cout << "Ваш возраст - " << age << endl;
}

/*
    do
    {
       //....
    } while (true);
*/