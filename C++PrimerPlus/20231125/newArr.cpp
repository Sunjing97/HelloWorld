#include <iostream>
#include <cstring>
using namespace std;

char *getname()
{
    char temp[80]; // 栈区，getname函数结束，直接释放，temp只是一个中间值
    cout << "Enter last name:";
    cin >> temp;
    char *p = new char[strlen(temp) + 1]; // 动态数组
    // 实际申请的内存为new的，用了多少申请多少，不会浪费
    strcpy(p, temp);
    return p;
}

int main()
{
    char *name;
    name = getname();
    cout << name << " at " << (int *)name << endl
         << "nameSize:" << strlen(name) << endl;
    // 此时name的实际大小就是所占内存大小
    delete[] name;
    return 0;
}