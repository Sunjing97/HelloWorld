#include <iostream>
using namespace std;
int main()
{

    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";
    cin >> ch; // test case:hello new # world
    // 发送给cin的输入被缓冲，用户按下空格键，输入的内容才发送给程序
    while (ch != '#') // # 哨兵字符
    {
        cout << ch;
        ++count;
        cin >> ch;
    } // cin在读取char时，会忽略空格和换行符，空格不会回显，也没被包在count内
    cout << endl
         << count << " characters read\n";

    // cin.ignore(); 清除缓存区内容直到换行结束
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

    char ch1;
    int count1 = 0;
    cout << "ch1 Enter characters; enter # to quit:\n";
    cin.get(ch1); // test case:hello new # world
    // cin.get()补救
    while (ch1 != '#') // # 哨兵字符
    {
        cout << ch1;
        ++count1;
        cin.get(ch1);
    } // cin在读取char时，会忽略空格和换行符，空格不会回显，也没被包在count内
    cout << endl
         << count1 << " characters read\n";
    return 0;
}