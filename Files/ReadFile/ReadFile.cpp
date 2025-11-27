#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream f("ReadFile.cpp");
    if (f.is_open())
    {
        //string word;
        char c;
        while (f.get(c))
        {
            cout << c;
        }
        f.close();
    }
    f.open("ReadFile.cpp");
    if (f.is_open())
    {
        string line;
        while (getline(f, line))
        {
            cout << line << "\n";
        }
        f.close();
    }
}
