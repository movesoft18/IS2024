#include <iostream>
using namespace std;

constexpr unsigned char UPPER_LEFT_CORNER = 218;
constexpr unsigned char UPPER_RIGHT_CORNER = 191;
constexpr unsigned char LOWER_LEFT_CORNER = 192;
constexpr unsigned char LOWER_RIGHT_CORNER = 217;
constexpr unsigned char LEFT_BORDER = 179;
constexpr unsigned char RIGHT_BORDER = 179;
constexpr unsigned char TOP_BORDER = 196;
constexpr unsigned char BOTTOM_BORDER = 196;
constexpr unsigned char FILL_CHAR = ' ';

void Line(char first, char middle, char last, int width)
{     
    if (width > 0) // печатаем первый символ
        cout << first;
    // печатаем средние символы
    for (int i = 0; i < width - 2; i++)
        cout << middle;
    if (width > 1) // печатаем последний символ
        cout << last;
    cout << endl;
}

void Frame(int width, int height)
{
    if (height > 0)
        Line(UPPER_LEFT_CORNER, TOP_BORDER, UPPER_RIGHT_CORNER, width);
    for (int i = 0; i < height - 2; i++)
        Line(LEFT_BORDER, FILL_CHAR, RIGHT_BORDER, width);
    if (height > 1)
        Line(LOWER_LEFT_CORNER, BOTTOM_BORDER, LOWER_RIGHT_CORNER, width);
}


int main()
{
    //for (unsigned char c = 0; c != 255; c++)
    //    cout << c << " " << (int)c << ' ';
    //Line('+', '-', '+', 0);
    //Line('+', '-', '+', 1);
    //Line('+', '-', '+', 2);
    //Line('+', '-', '+', 3);
    //Line('+', '-', '+', 10);
    //Frame(0, 0);
    //Frame(0, 1);
    //Frame(1, 0);
    //Frame(1, 1);
    //Frame(1, 2);
    //Frame(2, 1);
    Frame(2, 2);
    Frame(3, 3);
    Frame(12, 7);
}
