#include "fibbonaci.h"

int fibbonachi(int m)
{
    int a = 1;
    int b = 1;
    int c;
    do
    {
        c = a + b;
        a = b;
        b = c;
    } while (c <= m);
    return c;
}
