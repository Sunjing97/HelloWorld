#include <iostream>
using namespace std;
int main()
{
    int number1[2][3] = {
        {1, 2, 3},
        {2, 3, 4}};                         // 满初始化
    int number2[2][3] = {1, 2, 3, 2, 3, 4}; // 满初始化
    int number3[2][3] = {1, 2};             // 不完全初始化
    int number4[2][3];                      // 未初始化
    int number5[][3] = {1, 2, 3, 2, 3, 4};  // 可以省略行的初始化

    // 遍历2DArray 需要用循环嵌套
    // row 行 col(column) 列
    for (int i = 0; i < sizeof(number1) / sizeof(number1[0]); i++)
    {
        // cout << sizeof(number1) / sizeof(number1[0]); 行的大小
        for (int j = 0; j < sizeof(number1[0]) / sizeof(number1[0][0]); j++)
        {
            cout << number1[i][j] << " ";
            // cout << sizeof(number1[0]) / sizeof(number1[0][0]);列的大小
        }
        cout << endl;
    }
    cout << "number5 row:" << sizeof(number5) / sizeof(number5[0]) << endl;
    return 0;
}