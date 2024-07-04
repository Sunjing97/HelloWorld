#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    // 整型
    char a = 9; // ASCII中9所对应的字符
    short b = 10;
    int c = 11;
    long d = 12;
    long long e = 13;
    cout << "char a = " << a << " " << sizeof(a) << endl
         << "short b = " << b << " " << sizeof(b) << endl
         << "int c =" << c << " " << sizeof(c) << endl
         << "long d=" << d << " " << sizeof(d) << endl
         << "long long e=" << e << " " << sizeof(e) << endl;

    // 浮点型
    float f = 1.1f;
    double g = 2.5;
    long double h = 3.9;
    cout << "float f =" << f << " " << sizeof(f) << endl
         << "double g =" << g << " " << sizeof(g) << endl
         << "long double h =" << h << " " << sizeof(h) << endl;

    // 字符串
    char ch1[] = "hello world";   // 隐式包含'\0'，
    char ch2[] = {'n', 'e', 'w'}; // 遇到'\0'结束
    char ch3[] = {'n', 'e', 'w', '\0'};
    string str = "hello new world";
    int ch1Size = strlen(ch1); // strlen C-style
    int ch2Size = strlen(ch2);
    int ch3Size = strlen(ch3);
    // sizeof 包含'\0' strlen 求有效长度不包含'\0'
    cout << "char ch1[] = " << ch1 << " " << sizeof(ch1) << " " << ch1Size << endl
         << "char ch2[] = " << ch2 << " " << sizeof(ch2) << " " << ch2Size << endl
         << "char ch3[] = " << ch3 << " " << sizeof(ch3) << " " << ch3Size << endl
         << "string str = " << str << " " << sizeof(str) << endl;
    cout << "hello world"
            " sun jing\n"; // 拼接字符串
    char name1[20];
    char name2[20];
    cout << "Enter your name1:\n";
    cin >> name1; // cin 再碰到空白结束（空格、制表、换行）
    cout << "Enter your name2:\n";
    cin >> name2;
    cout << "Your name1:" << name1 << endl
         << "Your name2:" << name2 << endl;
    
    // 数组:只有定义的时候可以用成员初始化列表进行初始化
    // int arr[3];//arr = arr4; not allowed
    int arr1[3] = {1, 2, 3}; // 满初始化
    int arr2[3] = {};        // 未初始化
    int arr3[3] = {1, 3};    // 不完全初始化
    int arr4[] = {1, 2, 3};  // 未给数组大小初始化
    for (int i = 0; i < 3; i++)
    {
        cout << "arr1[" << i << "]=" << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "arr2[" << i << "]=" << arr2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "arr3[" << i << "]=" << arr3[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "arr4[" << i << "]=" << arr4[i] << " ";
    }
    cout << endl;

    // 指针
    int n1 = 10;
    int *p1 = &n1;
    cout << "*p1 =" << *p1 << " "
         << "p1=" << p1 << " "
         << "&n1=" << &n1 << endl;
    int *p2 = new int(10);
    cout << "*p2 =" << *p2 << " "
         << "p2=" << p2 << endl;
    delete p2;

    int *p3 = new int[3];
    cout << &p3[0] << " " << &p3[1] << " " << &p3[2] << endl;
    cout << p3 << " " << p3 + 1 << " " << p3 + 2 << endl;
    delete[] p3;

    return 0;
}