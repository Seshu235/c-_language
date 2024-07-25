
#include <iostream>
using namespace std;

int main()
{
    uint16_t x = 234;
    wchar_t y = '3';
    char32_t ch;
    char16_t ch2;
    cout << sizeof(ch) << endl;
    cout << sizeof(ch2) << endl;
    int *p = nullptr;
    int *q = NULL;
    nullptr_t r = nullptr;
    void *z = nullptr;
    cout << sizeof(z) << endl;
    cout << sizeof(r) << endl;
    cout << sizeof(y) << endl;
    cout << x << endl;
    char val = 0xFF;
    cout << (int)val << endl;
}