#include <iostream>
using namespace std;
int main()
{
    int number = 1;
    while (number++ < 5)
    {
        cout << number << endl;
    } // 缺了一个1
    return 0;
}