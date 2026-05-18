// AsyncExample.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <thread>
#include <future>

using namespace std;

int longTask()
{
    this_thread::sleep_for(chrono::seconds(5));
    //throw 0;
    return 43;
}

int main()
{
    setlocale(LC_ALL, "");
    std::future<int> task = std::async(longTask);
    //auto task1 = async(longTask);
    cout << "Программа продолжается дальше...\n";
    // Делаем что-то еще, пока функция выполняется
    for (int i = 0; i < 20; i++)
    {
        std::cout << '.';
        std::this_thread::sleep_for(
            std::chrono::milliseconds(100)
        );
    }
    try
    {
        int result = task.get();  // Блокируется, пока результат не станет доступен
        std::cout << "\nResult = " << result << "\n";
    }
    catch (...)
    {
        std::cout << "\nОшибка в асинхронной функции\n";
    }
}
