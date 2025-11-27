#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "");
    if (argc < 3)
    {
        cout << "Недостаточно данных\n";
        return -1;
    }

    int a = 0, b = 0, c = 0;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    
    c = a + b;
    cout << a << "+" << b << "=" << c << endl;

}