// Iterators.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{ 1,2,3,4,5,6,7,8,9,0 };
    for (int n : v)
        std::cout << n << " "; // 6 2 3 4 5
    std::cout << std::endl;
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << " "; // 6 2 3 4 5
    std::cout << std::endl;
    for (vector<int>::iterator i = v.begin();
        i != v.end(); i++)
    {
        *i =  *i * 2;
    }
    std::cout << std::endl;
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    std::cout << std::endl;

    for (auto i = v.rbegin(); i != v.rend(); i++)
    {
        cout << *i << " ";
    }
    std::cout << std::endl;

}

