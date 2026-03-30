// Iterators.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{ 1,2,3,4,5,6,7,8,9,0 };
    vector<int> v1{ -1,-2,-3,-4,-5 };
    v1.insert(v1.begin(), 0);
    for (int n : v)
        std::cout << n << " ";
    std::cout << std::endl;
        v.push_back(100);
    v.insert(v.begin() + 1, { 200, 300, 400, 500 });
    v.insert(v.end(), 600);
    for (int n : v)
        std::cout << n << " ";
    std::cout << std::endl;
        v.insert(v.begin() + 3, v1.begin() + 1, v1.begin() + 3);

    for (int n : v)
        std::cout << n << " ";
    std::cout << "--------------" << std::endl;


    vector<int>v2{ 1,2,3,4,5,6,7,8,9,0 };
    for (int n : v)
        std::cout << n << " ";
    std::cout << std::endl;

    v2.erase(v2.begin()); // удаляем первый
    v2.erase(v2.begin() + 3); // удаляем 4-й
    v2.erase(v2.begin(), v2.begin() + 3); // удаляем с 1 по 3

    v.clear();
    v2.erase(v2.begin(), v2.end()); //v2.clear();
}

