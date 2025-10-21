#include <iostream>
#include "CrtLib.h"

using namespace std;
using namespace crt;

int main()
{
    GotoXY(5, 10);
    SetTextColor(COLOR_BLUE);
    cout << "Hello, world!\n";
    GotoXY(5, 11);
    SetTextBackground(COLOR_BROWN);
    SetTextColor(COLOR_LIGHT_RED);
    cout << "Hello, world again!\n";
    HideCursor();
}

