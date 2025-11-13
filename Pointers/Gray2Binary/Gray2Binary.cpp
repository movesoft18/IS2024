#include <iostream>
#include <iomanip>
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

int** Gray2Bin(int** array, int cols, int rows, int threshold)
{
    int** bin = Create2DArray<int>(rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            bin[i][j] = array[i][j] >= threshold ? 255 : 0;
    return bin;
}

int main()
{
    setlocale(LC_ALL, "");
    int rows = 10;
    int cols = 20;
    auto** arr = Create2DArray<int>(rows, cols);
    // заполняем массив с консоли
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            arr[i][j] = rand() % 256;
    cout << "Исходный массив:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << setw(4) << arr[i][j];
        cout << endl;
    }
    int** bin = Gray2Bin(arr, cols, rows, 128);
    cout << "\nРезультирующий массив:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << setw(4) << bin[i][j];
        cout << endl;
    }
    // удаление массива
    Destroy2DArray<int>(arr, rows);
    Destroy2DArray<int>(bin, rows);
    arr = nullptr;
    bin = nullptr;
}

