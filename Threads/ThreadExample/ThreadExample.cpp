#include <iostream>
#include <thread>

// Функция, которая будет выполняться в отдельном потоке
void threadFunction() {
    std::cout << "Привет из потока с ID: " << std::this_thread::get_id() << std::endl;
}

int main() {
    setlocale(LC_ALL, "");
    // Создаём поток и передаём ему функцию для выполнения
    std::thread t(threadFunction);
    std::thread t2(threadFunction);
    std::thread t3(threadFunction);
    std::thread t4(threadFunction);

    // Выводим ID основного потока
    std::cout << "Привет из основного потока с ID: " << std::this_thread::get_id() << std::endl;

    // Ждём завершения потока (если не вызвать, программа может завершиться до завершения потока)
    t.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}