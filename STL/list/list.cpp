// list.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <list>
using namespace std;

struct Student
{
    int id;
    std::string fio;
    std::string group;
    int course;
    //...
};

int main()
{
    std::list<int> v1; // пустой список
    std::list<int> v2(v1); // список v2 - копия список v1
    std::list<int> v3 = v1; // список v3 - копия список v1
    std::list<int> v4(5); // список v4 состоит из 5 чисел, каждое число равно 0
    std::list<int> v5(5, 2); // список v5 состоит из 5 чисел, каждое число равно 2
    std::list<int> v6{ 1, 2, 4, 5 }; // список v6 состоит из чисел 1, 2, 4, 5
    std::list<int> v7 = { 1, 2, 3, 5 }; // список v7 состоит из чисел 1, 2, 4, 5
    std::list<Student> students{
        Student {1, "Иванов Иван Иванович", "СПО1", 2},
        Student {2, "Петров Петр Петрович", "СПО1", 2},
        Student {3, "Сидорова Татьяна Павловна", "СПО2", 3},
    };

    std::list<int> numbers{ 1, 2, 3, 4, 5 };
    int first = numbers.front(); // 1
    int last = numbers.back(); // 5
    //int second = numbers[1]; // индексирования нет!
    //int n3 = numbers.at(2); // индексирования нет!
    std::cout << "first: " << first << std::endl;
    std::cout << "last: " << last << std::endl;
    //numbers[0] = 6; // индексирования нет!

    numbers.push_back(34);
    numbers.push_front(100);

    numbers.insert(++numbers.begin(), 400);
    auto iter = numbers.begin();
    for (int i = 0; i < 5; i++) iter++;
    numbers.insert(iter, 1000);

    for (list<int>::iterator i = numbers.begin();
        i != numbers.end(); i++)
    {
        *i = *i * 2;
    }

    for (int n : numbers)
        std::cout << n << " "; 
    std::cout << std::endl;
    numbers.pop_back(); // удаляет последний
    numbers.pop_front(); // удаляет первый
    for (auto i = numbers.rbegin();
        i != numbers.rend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;
    numbers.clear();
}
