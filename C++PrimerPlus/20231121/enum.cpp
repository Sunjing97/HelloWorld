#include <iostream>
using namespace std;
enum color
{
    red,
    orange,
    yellow,
    green,
    blue,
    white = 100,
    black // black 101
};        // 枚举：另一种创建常量的方式，red···blue隐式对应0-4,white显式

int main()
{
    // 枚举只有定义赋值运算符，没有定义算数运算符
    color a = red;
    color b = yellow;
    color c = white;
    color d = color(10); // 强转
    color e = black;
    cout << "color a = " << a << " "
         << "color b = " << b << " "
         << "color c = " << c << " "
         << "color d = " << d << " "
         << "color e = " << e << " "
         << "a + b = " << a + b << endl; // 提升为int型进行运算，不是枚举进行运算
    return 0;
}