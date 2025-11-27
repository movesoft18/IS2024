#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //std::string s = "Hello World!";
    char str[] = "Hello World!";
    char str1[100] = "hello World";
    char str2[100] = "";
    char str3[100];
    //str2 = str1; // Ошибка
    auto len = strlen(str1);
    std::cout << str << " " << len << endl;
    strcpy_s(str2, str1); // strcpy(Куда_скопировать, что_скопировать);
    cout << str1 << " " << str2 << endl;
    char str4[100] = "Hello ";
    char str5[] = "world!";
    strcat_s(str4, str5);
    cout << " str4=" << str4 << endl;
    auto result = strcmp(str, str);
    cout << result << endl;
    if (strcmp(str1, str2) == 0)
    {
        cout << "strings are equals!\n";
    }
    else
    {
        cout << "strings are not equals!\n";
    }
    auto r = strcmp(str, str1);
    cout << r << endl;
    char* str6 = new char[20] {"Hello, my friend!"};
    r = strcmp(str, str6);
    delete[] str6;
}

