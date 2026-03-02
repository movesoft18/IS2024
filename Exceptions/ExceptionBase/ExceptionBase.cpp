#include <iostream>
using namespace std;

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    throw 0;
}

int main()
{
    setlocale(LC_ALL,"");
    int e = 0;
    try
    {
        int c = divide(4, 0) ;
        cout << c << endl;
    }
    catch (int e)
    {
        cout << "Произошла ошибка с кодом " << e << endl;
    }
    catch (double e)
    {
        cout << "Произошла ошибка с кодом " << e << endl;
    }
    catch (const char e[100])
    {
        cout << e << endl;
    }
    catch (...)
    {
        cout << "Общий обработчик исключений\n";
    }
}

