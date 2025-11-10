#include <iostream>
using namespace std;
struct Person
{
    char name[20];
    int age;
    char gender;
    //...
};

int main()
{
    setlocale(LC_ALL, "");
    int* p = NULL;
    double* p1 = nullptr;
    Person* person = nullptr;

    int x = 10;
    double y = 21.326;
    Person man
    {
        "Иванов",
        24,
        'М',
    };

    p = &x;
    p1 = &y;
    person = &man;
    void* v = &x;
    int* p2 = p;

    cout << x << " " << p << endl;
    cout << x << " " << *p << endl;
    cout << y << " " << p1 << endl;
    cout << y << " " << *p1 << endl;
    cout << person << " " << person->name <<
        person->age << " " << person->gender << endl;

}
