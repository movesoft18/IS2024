#include <iostream>

int factorial(int n)
{
    if (n == 1) return 1;
    return factorial(n - 1) * n;
}

int sum(int n)
{
    if (n == 1) return 1;
    return sum(n - 1) + n;
}

int sumClassic(int n)
{
    int r = 0;
    for (int i = 1; i <= n; i++)
        r += i;
    return r;
}

int main()
{
    int x = factorial(5);
    std::cout << x << "\n";
    x = sum(10);
    std::cout << x << "\n";
    x = sumClassic(214700000);
    std::cout << x << "\n";
}
