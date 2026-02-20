#include <iostream>
using namespace std;

struct ListItem
{
    int id; // идентификатор товара
    char name[30];  // название
    float price; // цена за единицу
    float count; // количество
    ListItem* next; // указатель на следующий элемент
};

ListItem* first = nullptr;

// обновить значение этой глобальной переменной first
void AddFirst(ListItem*& firstItem,
    int productId, 
    const char* productName, 
    float productPrice, 
    float productCount)
{
    ListItem* temp = new ListItem; // создаем в памяти новый элемент списка
    temp->id = productId;   // присваиваем полям элемента нужные значения
    strcpy_s(temp->name, productName); // имя продукта - это стока C-Style, поэтому копируем ее с помощью специальной функции копирования строк
    temp->price = productPrice; // присваиваем полям элемента нужные значения
    temp->count = productCount; // присваиваем полям элемента нужные значения
    temp->next = firstItem; // нам нужно встроить элемент в начало списка, поэтому
    // указатель next настраиваем таким образом, чтобы он указывал на элемент
    // который ранее был первым (на него указывает first)
    firstItem = temp;       // а теперь делаем, чтобы first указывал на наш созданный элемент
}

void PrintItem(ListItem* item)
{
    if (item == nullptr) return; // проверяем коректность указателя
    cout << "Ид товара: " << item->id << endl; // далее выводим данные в консоль
    cout << "Название: " << item->name << endl;
    cout << "Цена: " << item->price << " руб." << endl;
    cout << "Количество: " << item->count << " кг." << endl;
    cout << endl;
}

void PrintList(ListItem* firstItem)
{
    auto temp = firstItem; // начинаем с первого элемента
    while (temp != nullptr) // перебираем весь список
    {
        PrintItem(temp); // печатаем очередной элемент ранее созданной функцией
        temp = temp->next; // перемещаемся к следующему элементу
    }
}

int main()
{
    setlocale(LC_CTYPE, "");
    AddFirst(first, 1, "Яблоки", 150, 30.5);
    AddFirst(first, 2, "Груши", 250, 180);
    AddFirst(first, 3, "Бананы", 170, 3);
    PrintList(first);
}
