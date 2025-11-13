// DynamicMatrix.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

template <typename T>
T** Create2DArray(int rows, int cols) // функция возвращает указатель на созданный в куче двумерный массив
{
    if (rows <= 0 || cols <= 0) return nullptr; // проверка размеров матрицы на допустимые величины
    T** m = new T * [rows];
    for (int i = 0; i < rows; i++)
        m[i] = new T[cols];
    return m;
}

template <typename T>
void Destroy2DArray(T** m, int rows)
{
    if (rows <= 0 || m == nullptr) return;
    for (int i = 0; i < rows; i++)
        delete[] m[i];
    delete[] m;
}

template <typename T>
void Print2DArray(T** m, int cols, int rows)
{
    if (rows <= 0 || cols <= 0 || m == nullptr) return; // проверка размеров матрицы на допустимые величины, а также является ли указатель на матрицу пустым
    for (int j = 0; j < rows; j++)
    {
        for (int i = 0; i < cols; i++)
            cout << m[j][i] << " ";
        cout << endl;
    }
}

int main()
{
    int rows = 3;
    int cols = 4;

    auto** arr = Create2DArray<double>(rows, cols);
    // заполняем массив с консоли
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];
    // печать массива
    Print2DArray(arr, cols, rows);
    // удаление массива
    Destroy2DArray<double>(arr, rows);
    arr = nullptr;
}

