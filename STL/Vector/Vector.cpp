#include <iostream>
#include <vector>

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
    int a[10]{ 1,2,3,4,5,6,7,8,9,0 };
    int b[10];
    // b = a; // так нельзя
    for (int i = 0; i < 10; i++) b[i] = a[i];

    std::vector<int> v1; // пустой вектор
    std::vector<int> v2(v1); // вектор v2 - копия вектора v1
    std::vector<int> v3 = v1; // вектор v3 - копия вектора v1
    std::vector<int> v4(5); // вектор v4 состоит из 5 чисел, каждое число равно 0
    std::vector<int> v5(5, 2); // вектор v5 состоит из 5 чисел, каждое число равно 2
    std::vector<int> v6{ 1, 2, 4, 5 }; // вектор v6 состоит из чисел 1, 2, 4, 5
    std::vector<int> v7 = { 1, 2, 3, 5 }; // вектор v7 состоит из чисел 1, 2, 4, 5
    std::vector<Student> students{
        Student {1, "Иванов Иван Иванович", "СПО1", 2},
        Student {2, "Петров Петр Петрович", "СПО1", 2},
        Student {3, "Сидорова Татьяна Павловна", "СПО2", 3},
    };

    std::vector<int> numbers{ 1, 2, 3, 4, 5 };
    numbers.reserve(100);
    int first = numbers.front(); // 1
    int last = numbers.back(); // 5
    int second = numbers[1]; // 2
    int n3 = numbers.at(2); // 3
    std::cout << "first: " << first << std::endl;
    std::cout << "second: " << second << std::endl;
    std::cout << "last: " << last << std::endl;
    std::cout << "n3: " << n3 << std::endl;
    numbers[0] = 6; // изменяем значение

    numbers.push_back(34);
    numbers.push_back(100);

    for (int n : numbers)
        std::cout << n << " "; // 6 2 3 4 5
    std::cout << std::endl;
    for (int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " "; // 6 2 3 4 5
}