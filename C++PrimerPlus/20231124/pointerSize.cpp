#include <iostream>
using namespace std;
int main()
{
    char *p1;
    short *p2;
    int *p3;
    long *p4;
    long long *p5;
    float *p6;
    long double *p7;
    // 指针大小相同，指针有类型，类型不一样，存放的内容不同
    cout << "char size " << sizeof(*p1) << " char address " << sizeof(p1) << endl
         << "short size " << sizeof(*p2) << " short address " << sizeof(p2) << endl
         << "int size " << sizeof(*p3) << " int address " << sizeof(p3) << endl
         << "long size " << sizeof(*p4) << " long address " << sizeof(p4) << endl
         << "long long size " << sizeof(*p5) << " long long address " << sizeof(p5) << endl
         << "float size " << sizeof(*p6) << " float address " << sizeof(p2) << endl
         << "long double size " << sizeof(*p7) << " long double address " << sizeof(p2) << endl;
    return 0;
}