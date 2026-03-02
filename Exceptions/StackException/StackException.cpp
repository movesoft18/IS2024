#include <iostream>
#include "../MyStack/MyStack.h"

int getAge()
{
    std::cout << "Введите свой возраст:";
    int age;
    std::cin >> age;
    if (age < 0 || age > 100)
        throw std::out_of_range(
            "Возраст должен быть в диапазоне 0..100"
        );

}

int main()
{
    setlocale(LC_ALL, "");
    StackItem<int>* stack = nullptr;
    try
    {
        Push(stack, getAge());
        auto x1 = Pop(stack);
        auto x2 = Pop(stack);
        std::cout << x1 << " " << x2 << std::endl;
    }
    catch (std::out_of_range e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::runtime_error e)
    {
        std::cout << e.what() <<std::endl;
    }
    catch (std::exception e)
    {
        std::cout << e.what() << std::endl;
    }
}

