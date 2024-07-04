#include <iostream>
#include <array> //使用array必须有头文件
using namespace std;
// 模版类array 使用必须实例化
// 带有成员函数 at 可以防止数组越界
// array<typeName,n>variable
// 长度固定，分配在栈里

int main()
{
    array<int, 10> test01;
    test01[0] = 10;
    test01[1] = 20;
    cout << "sizeof test01:" << sizeof(test01) / sizeof(test01[0]) << endl;
    return 0;
}