#include <iostream>
using namespace std;

// ax+b=0
// x=-b/a

void linearEquation(
    double a, // коэф а
    double b, // коэф b
    int& rootsCount, //кол-во корней
    // 0 - нет корней
    // 1 - 1 корень
    // 2 - бесконечное мн. реш
    double& x        // корень
)
{
    if (a != 0)
    {
        rootsCount = 1;
        x = -b / a;
        return;
    }
    if (b == 0)
    {
        rootsCount = 2;
        return;
    }
    rootsCount = 0;
    return;
}

// результат:
// 0 - нет корней
// 1 - 1 корень
// 2 - бесконечное мн. реш
int linearEquation(
    double a, // коэф а
    double b, // коэф b
    double& x        // корень
)
{
    if (a != 0)
    {
        x = -b / a;
        return 1;
    }
    if (b == 0)
    {
        return 2;
    }
    return 0;
}



int main()
{
    //int number = 100;
    //int& refNumber = number;

    //cout << number << " " << refNumber << endl;
    //refNumber = 300;
    //cout << number << " " << refNumber << endl;
    //cout << linearEquation(3, 8) << endl;
    //cout << linearEquation(0, 8) << endl;
    //cout << linearEquation(0, 0) << endl;
    int roots = 0;
    double root = 0;
    double a, b;
    setlocale(LC_ALL, "");
    cout << "Введите коэффициенты уравнения ax+b=0: ";
    cin >> a >> b;
    linearEquation(a, b, roots, root);
    //roots = linearEquation1(a, b, root);
    switch (linearEquation(a, b, root))
    {
    case 0:
        cout << "Корней нет\n";
        break;
    case 1:
        cout << "x = " << root << endl;
        break;
    case 2:
        cout << "х - любое число.\n";
        break;
    }
}

