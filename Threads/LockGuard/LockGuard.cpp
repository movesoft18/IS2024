#include <iostream>
#include <thread>
#include <mutex>

using namespace std;
unsigned int c = 0;

std::mutex mut;

void IncrementSync() // функция инкремента глобальной переменной, не использующая синхронизацию
{
    for (int i = 0; i < 2000000; i++)
    {
            std::lock_guard<std::mutex> lock(mut);
            c++;
    }
}
int main()
{
    c = 0;
    thread t3(IncrementSync);
    thread t4(IncrementSync);
    t3.join();
    t4.join();
    cout << "c= " << c << endl; // в результате получаем все что угодно от 2 000 000 до 4 000 000, но не 4 000 000
    cin.get();
}