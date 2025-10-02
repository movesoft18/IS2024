#include <iostream>
#include <string>
/*
int sum(int a, int b)
{
    return a + b;
}

double sum(double a, int b)
{
    return a + b;
}

long long sum(long long a, long long b)
{
    return a + b;
}

std::string sum(std::string a, std::string b)
{
    return a + b;
}
*/

template <typename T1, typename T2>
T1 sum(T1 a, T2 b)
{
    return a + b;
}

template <typename T>
T max3(T a, T b, T c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        return c;
    }
    return b;
}

template <typename Max>
int maxValueInArray(Max a[], int count)
{
    int index = 0;
    Max value = a[0];
    for (int i = 1; i < count; i++)
    {
        if (a[i] > value)
        {
            value = a[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    auto result = sum(40, 90);
    auto result2 = sum(3.5, 20);
    auto result3 = sum(357342897948372LL, 20LL);
    auto result4 = sum<std::string, std::string>("Vasya", "Masha");
    std::cout << result << "\n";
    std::cout << result2 << "\n";
    std::cout << result3 << "\n";
    std::cout << result4 << "\n";
    auto maxValue1 = max3(result, 56, 123);
    std::cout << maxValue1 << "\n";
    auto maxValue2 = max3<std::string>("Vasya", "Petya", "Masha");
    std::cout << maxValue2 << "\n";
    int array[10]{ 1,22,3,-64,5,63,47,8,89,0 };
    std::string arrayS[4]{
        "masha",
        "Petya",
        "Vasya",
        "Egor",
    };
    int index = maxValueInArray(array, 10);
    std::cout << "index = " << index << " max value = " << array[index] << "\n";
    index = maxValueInArray<std::string>(arrayS, 4);
    std::cout << "index = " << index << " max value = " << arrayS[index] << "\n";

}

