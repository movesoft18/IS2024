#include <iostream>
#include <queue>
#include <semaphore>
#include <thread>
#include <string>
#include <mutex>
#include <atomic>
using namespace std;

counting_semaphore<200> sem(0);
queue<string> tasks;
mutex mut;
atomic<bool> needStop(false);

void Producer(int count)
{
    for (int i = 0; i < count; i++)
    {
        this_thread::sleep_for(chrono::seconds(rand() % 2)); // имитация работы
        string task = "Task " + to_string(i); // текст задачи
        {
            lock_guard<mutex> lock(mut);
            tasks.push(task); // ставим задачу в очередь
        }
        string message = "Создана задача " + task + '\n';
        cout << message;
        sem.release(); // разблокируем семафор
    }
    {
        lock_guard<mutex> lock(mut);
        tasks.push("End.");
    }
    sem.release();
}

void Consumer()
{
    string task;
    while (true)
    {
        sem.acquire(); // жду открытия семафора
        if (needStop)
        {
            sem.release();
            return;
        }
        {
            lock_guard<mutex> lock(mut);
            task = tasks.front(); // читаю задачу
            tasks.pop(); // удаляю ее из очереди
        }
        if (task == "End.")
        {
            cout << "Заканчиваем работу.\n";
            needStop = true;
            sem.release();
            return;
        }
        string message = "Обрабатывается задача " + task + '\n';
        cout << message;
        this_thread::sleep_for(chrono::seconds(rand() % 10)); // имитация работы
    }
}

int main()
{
    setlocale(LC_ALL, "");
    srand(clock());
    thread producer(Producer, 20);
    vector<thread> consumers;
    for (int i = 0; i < 8; i++)
        consumers.emplace_back(thread(Consumer));
   /* thread consumer1(Consumer);
    thread consumer2(Consumer);
    thread consumer3(Consumer);
    thread consumer4(Consumer);
    thread consumer5(Consumer);
    thread consumer6(Consumer);
    thread consumer7(Consumer);
    thread consumer8(Consumer);*/
    producer.join();
    for (int i = 0; i < 8; i++)
        consumers[i].join();
  /* consumer1.join();
    consumer2.join();
    consumer3.join();
    consumer4.join();
    consumer5.join();
    consumer6.join();
    consumer7.join();
    consumer8.join();*/

}