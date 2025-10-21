#include <iostream>
#include "windows.h"
using namespace std;

string name[30];
char gender[30];
int age[30];
//...

//struct Student
//{
//    string name;
//    int age;
//    char gender;
//    string passport;
//    //...
//};
//
//Student students[30];
//Student student{
//    "Иванова",
//    22,
//    'Ж',
//    "2123 444555",
//};


void SetTextColor(HANDLE handle, WORD color)
{
    CONSOLE_SCREEN_BUFFER_INFO info;
    color = color & 0b0000000000001111; //0x0f
    GetConsoleScreenBufferInfo(handle, &info);
    info.wAttributes = info.wAttributes & 0xf0; //0000000011110000
    info.wAttributes = info.wAttributes | color;
    SetConsoleTextAttribute(handle, info.wAttributes);
}

int main()
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    //SetConsoleTextAttribute(hStdOut, 0x0f);
    SetTextColor(hStdOut, 3);
    cout << "Hello!!!\n";










    //students[0].name = "Иванов Иван Иванович";
    //students[0].gender = 'М';
    //students[0].age = 17;
    //students[0].passport = "9201 123456";
    //cout << student.name << endl;


}
