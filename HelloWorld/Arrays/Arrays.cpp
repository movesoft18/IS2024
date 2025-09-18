#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int numbers[10] = {-1,2,30,4,5,66,7,8,9,0};
    int numbers1[]{9,8,7,6,5,4,-3};
    int a = numbers[2];
    numbers[9] = 100;
    char s1[] = {'h','e','l','l','o','!'};
    char s2[] = "hello!";
    int sizeNumbers = sizeof(numbers1) / sizeof(int);

    for (int i = 0; i < sizeNumbers; i+=2)
        cout << numbers1[i] << " ";
    cout << endl;
    int sum = 0;
    for (int i = 0; i < sizeNumbers; i++)
    {
        sum += numbers[i];
    }    
    cout << "Сумма элементов массива numbers = " << sum << endl;

    for (auto element : numbers)
        cout << element << " ";
    cout << endl;



    cout << endl;

    
}

