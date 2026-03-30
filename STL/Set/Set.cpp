// Set.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <set>
using namespace std;

set<int> numbers{ 1,2,3,4,5,6,7 };

int main()
{
    numbers.insert(4);
    numbers.insert({ 90,100 });

    for (auto i = numbers.begin(); i != numbers.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    numbers.erase(5);
    cout << numbers.empty() << endl;
    cout << numbers.size() << endl;
    auto pos = numbers.find(90);
    if (pos != numbers.end())
        numbers.erase(pos, numbers.end());
    cout << numbers.count(4) << endl;
    numbers.clear();
}

