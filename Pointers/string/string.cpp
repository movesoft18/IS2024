#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "");
    std::string s = "Hello, world!";
    std::string s1 = s;
    std::string s2 = s + s1 + "....";
    std::cout << s << " " << s1 << " " << s2 << "\n";
    auto len = s.length();
    std::string s3 = "My friend";
    if (s3 == s1)
    {
        std::cout << "Строки равны\n";
    }
    if (s3 > s1)
    {
        std::cout << "s3 > s1\n";
    }
    std::cout << s[0] << s[2] << s[3] << std::endl;
    s[4] = 'G';
    std::cout << s << std::endl;
}

