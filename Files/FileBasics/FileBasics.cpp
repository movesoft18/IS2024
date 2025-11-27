#include <iostream>
#include <fstream>

int main()
{
    std::ofstream f;
    //...
    f.open("test.txt");
    int i = 1000;
    std::string s = "Good bye!\n";
    if (f.is_open())
    {
        f << "Hello World!\n" << i << "\n" << s;
        f.close();
    }
}

