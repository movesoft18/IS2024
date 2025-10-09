#include <iostream>
using namespace std;

bool isPrime(int number)
{
    if (number < 2)
        return false;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{
    for (int i = 0; i < 2147000000; i++)
        if (isPrime(i))
            cout << i << ' ';
    cout << endl;
}
