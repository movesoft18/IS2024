#include <iostream>
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    vector<string> names{
        "Петров",
        "Иванов",
        "Сидоров",
        "Иванова",
        "Петрова",
        "Сидорова",
    };
    /*
    // так работать не будет
    for (auto i = names.begin(); i != names.end(); i++)
    {
        if ((*i)[0] == 'И')
            names.erase(i);
    }
    */
    for (auto i = 0; i < names.size(); i++)
    {
        if (names[i][0] == 'И')
            names.erase(names.begin() + i);
    }
    for (auto e : names)
        cout << e << endl;
}

