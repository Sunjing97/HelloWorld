#include <iostream>
using namespace std;
int main()
{
    int *p;
    *p = 200; // 200可能会占用随机一块地址，有可能毁掉已用地址上的数据
    return 0;
}