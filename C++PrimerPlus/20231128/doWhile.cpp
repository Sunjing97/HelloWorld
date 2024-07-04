#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    do
    {
        cout << "number:" << number << endl;
        number++;
    } while (number < 10);
    // 至少执行一次
    return 0;
}