#include <iostream>
using namespace std;
int main()
{
    string str = "hello world";

    for (int i = 0; i < 3; i++)
    {
        cout << i << endl;
    } // 一般格式
    for (int i = str.size() - 1; i >= 0; i--)
    {
        cout << str[i];
    } // 倒叙输出
    cout << endl;

    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i : arr)
    {
        cout << i << endl;
    } // C++ 11

    return 0;
}