#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int matrix[3][2]{
        {1,4},
        {6,3},
        {-5, 12}
    };

    cout << matrix[2][1] << endl;

    double m[3][3]{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // i - номер строки
    for (int i = 0; i < 3; i++)
    {
        // j - столбец
        for (int j = 0; j < 3; j++)
        {
            cin >> m[i][j];
        }
    }


    // i - номер строки
    for (int i = 0; i < 3; i++)
    {
        // j - столбец
        for (int j = 0; j < 3; j++)
        {
            cout << m[i][j] << ' ';
        }
        cout << endl;
    }
    double determinant = m[0][0] * m[1][1] * m[2][2] +
        m[0][1] * m[1][2] * m[2][0] +
        m[1][0] * m[2][1] * m[0][2] -
        m[0][2] * m[1][1] * m[2][0] -
        m[0][1] * m[1][0] * m[2][2] -
        m[2][1] * m[1][2] * m[0][0];
    cout << "Определитель = " << determinant << endl;

}

