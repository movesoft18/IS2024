#include "ListLib.h"
#include <iostream>

ListItem* first = nullptr;
int main()
{
    setlocale(LC_ALL, "");
    AddFirst(first, 1, "Яблоки", 93.99, 100); // добавляем в начало первый элемент Яблоки
    AddFirst(first, 3, "Бананы", 72, 90);   // добавляем в начало второй элемент Бананы, бананы стают первыми, Яблоки вторыми
    auto oranges = AddLast(first, 4, "Апельсины", 89.99, 50.7); // добавляем в конец Апельсины, oranges - указатель на апельсины
    auto mandarine = AddLast(first, 5, "Мандарины", 189.99, 147);// добавляем в конец Мандарины
    PrintList(first);
    auto kiwi = AddAfter(oranges, 2, "Киви", 129.99, 17); // вставить после апельсинов
    auto persimmon = AddAfter(kiwi, 6, "Хурма", 159.99, 27); // вставить после киви
    PrintList(first);
    auto i2 = Delete(first, kiwi); // удаляем киви
    PrintList(first);
    auto bananas2 = AddLast(first, 9, "Бананы", 160, 43);
    AddLast(first, 15, "Лук репчатый", 10, 233);
    PrintList(first);
    std::cout << "---------------\n";
    auto item = "Бананы";
    auto result = Find(first, item);
    if (result == nullptr)
        std::cout << "Товар не найден!\n";
    while (result != nullptr)
    {
        PrintItem(result);
        result = Find(result->next, item);
    }
    std::cout << "---------------\n";
    auto bananasList = FindAll(first, "Бананы");
    PrintList(bananasList);
    std::cout << "---------------\n";
    SaveListToTextFile(first, "list.txt");
    SaveListToTextFile(bananasList, "bananas.txt");
    DeleteList(bananasList);
    DeleteList(first);
    first = LoadListFromTextFile("list.txt");
    PrintList(first);
    DeleteList(first);
}

