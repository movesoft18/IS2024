#include <iostream>
using namespace std;

//int sum(int a, int b)
//{
//    return a + b;
//}

int sum(int a, int b, 
    int d = 0, int e = 0, 
    int f = 0, int g = 0)
{
    return a + b + d + e + f + g;
}

//double sum(int a, int b)
//{
//    return a + b;
//}

double sum(double a, double b)
{
    return a + b;
}

double sum(double a, int b)
{
    return a + b;
}

double sum(int a, double b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}

long long sum(long long a, long long b)
{
    return a + b;
}



int main()
{
    cout << sum(sum(4,sum(5,3)), 8) << endl;
    cout << sum(4.9, 8.1) << endl;
    cout << sum(4.9, 8) << endl;
    cout << sum(4, 8.1) << endl;
    cout << sum(4.f, 8.1f) << endl;
    cout << sum(4LL, 8LL) << endl;
    cout << sum(1, 2,3,4,5,6) << endl;
    cout << sum(1, 2) << endl;

}
