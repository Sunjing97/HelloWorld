#include <iostream>
#include <cstring>
using namespace std;
int main()
{
     char flower[10] = "rose";
     cout << flower << endl;
     // cout 输出char类型，打印改地址字符，直到'\0'结束
     // 除char类型外，cout 数组名输出是地址
     cout << (int *)flower << endl; // 输出char类型地址

     const char *p = "hello";
     // "hello" 带引号的可以理解为地址，但“hello”是常量，为只读
     // 所以需要用const修饰指针指向的内容，限制其为常量

     // *p = "world"; not allowed const 限定了 *p
     p = flower; // 指针可以改变，p是flower的地址
     cout << "p -> flower:" << p
          << " at " << (int *)p << endl;

     char *p1 = new char[strlen(flower) + 1]; // 实际长度加上'\0'
     // p1新地址
     strcpy(p1, flower); // 这样把flower的值给到p1，不会改变地址
     cout << "p1 -> flower:" << p1
          << " at " << (int *)p1 << endl;
     delete[] p1;

     char food[20];
     strncpy(food, "dsadnundjsidiand", 19);
     // strcpy 改进版 多了一个长度限制，数组最大值-1
     food[19] = '\0';
     cout << food << endl;
     return 0;
}