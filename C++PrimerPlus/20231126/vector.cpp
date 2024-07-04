#include <iostream>
#include <vector> //使用vertor必须有头文件
using namespace std;
// 模版类vector 使用必须实例化
// 带有成员函数 at 可以防止数组越界
// vector<typeName> variable(n)  n可以省略，一般直接省略
// 使用new创建动态数据，自动完成，可自动调整长度
int main()
{
    vector<int> test01(8); // 实例化
    test01[0] = 10;
    test01[1] = 20;
    cout << "sizeof test01:" << sizeof(test01) / sizeof(test01[0]) << endl;
    return 0;
}