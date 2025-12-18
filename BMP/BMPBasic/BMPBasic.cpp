#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#pragma pack(push, 1)
struct BitmapFileHeader
{
    char  bfType[2]; // содержит BM
    uint32_t bfSize; // размер файла в байтах
    uint16_t  bfReserved1; // не используется
    uint16_t  bfReserved2; // не используется
    uint32_t bfOffBits; // смещение до растровых данных
};

struct BitmapInfoHeader
{
    uint32_t biSize;            // должно быть 40
    int32_t biWidth;            // ширина
    int32_t biHeight;           // высота
    uint16_t biPlanes;          // всегда 1
    uint16_t biBitCount;        // число бит на пиксель 
                                // 1 - 2 цвета,
                                // 4 - 16 цветов,
                                // 8 - 256 цветов,
                                // 24 - 16777216 цветов
    uint32_t biCompression;     // Сжато ли изображение 0 - не сжато
    uint32_t biSizeImage;       // содержит размер растрового изображения в байтах
    int32_t biXPelsPerMeter;    // разрешение по х
    int32_t biYPelsPerMeter;    // разрешение по у
    uint32_t biClrUsed;         // кол-во используемых цветов
    uint32_t biClrImportant;    // кол-во важных цветов
};

struct RGBQuad
{
    uint8_t blue;
    uint8_t green;
    uint8_t red;
    uint8_t reserved;
};

#pragma pack(pop)

int fileSize(const string& fileName)
{
    ifstream f(fileName);
    if (f.is_open())
    {
        f.seekg(0, ios::end);
        return f.tellg();
    }
    return -1;
}


int main()
{
    setlocale(LC_ALL, "");
    const string fileName = "256.bmp";
    ifstream f(fileName);
    if (f)
    {
        BitmapFileHeader bfh;
        BitmapInfoHeader bih;
        f.read((char*)&bfh, sizeof(BitmapFileHeader));
        cout << "Сигнатура: " << bfh.bfType[0] << bfh.bfType[1] << endl;
        cout << "Размер файла: " << bfh.bfSize << endl;
        cout << "Размер файла истинный: " << fileSize(fileName) << endl;
        f.read((char*)&bih, sizeof(BitmapInfoHeader));
        cout << "Размер: " << bih.biSize << endl;
        cout << "Ширина: " << bih.biWidth << endl;
        cout << "Высота: " << bih.biHeight << endl;

        //biBitCount = 1 - монохромное (2 цвета) 2^1; 4 - 16 цветов 2^4
        //biBitCount = 8 - 256 цветов 2^8; 24 - 16777216 цветов 2^24
        cout << "Бит на пиксель: " << bih.biBitCount << endl; 
        cout << "Сжатие: " << bih.biCompression << endl;
        cout << "Размер изображения: " << bih.biSizeImage << endl;
        cout << "Разрешение по х: " << bih.biXPelsPerMeter << endl;
        cout << "Разрешение по у: " << bih.biYPelsPerMeter << endl;
        cout << "Используемые цвета: " << bih.biClrUsed << endl;
        cout << "Важные цвета: " << bih.biClrImportant << endl;
        int paletteSize = bih.biClrUsed == 0 
            ? 1 << bih.biBitCount 
            : bih.biClrUsed;
        if (bih.biBitCount <= 8)
        {
            RGBQuad* palette = new RGBQuad[paletteSize];
            f.read((char*)palette, sizeof(RGBQuad) * paletteSize);
            cout << "\n\n";
            for (int i = 0; i < paletteSize; i++)
            {
                cout << "\nЭлемент " << i << "\n-----------\n";
                cout << "Красный: " << (int)palette[i].red << " Зеленый: "
                    << (int)palette[i].green << " Синий: "
                    << (int)palette[i].blue << "\n";
            }



            delete[] palette;
        }

        f.close();

    }
}

