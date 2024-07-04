#include <iostream>
using namespace std;
int main()
{
#if 0
    // Mac 下 control+d来模拟EOF
    char ch;
    int count = 0;
    cout << "Enter characters:\n";
    cin >> ch;
    // 检测到EOF,eofbit && failbit --> 1
    while (cin.fail() == false)
    // eofbit && failbit --> 0 --> cin.fail() false
    // eofbit || failbit --> 1 --> cin.fail() true
    {
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << endl
         << count << " characters read\n";
    // cin 检测到EOF 将设置一个标志位 之后不在读取cin输入
    cin.clear(); // 清除EOF标记

    // win 下恢复cin输入
    // int n;
    // cout << "test cin valid\n";
    // cin >> n;
    // cout << "test\n";
#endif

#if 0
    // 以上代码可简写为如下内容
    // 常见的字符输入做法
    char ch1;
    int count1 = 0;
    cout << "Enter characters:\n";
    while (cin.get(ch1)) // 键盘模拟EOF
    {
        cout << ch1;
        count1++;
    }
    cout << endl
         << count1 << " characters read\n";
#endif

    int ch2;
    int count2 = 0;
    cout << "Enter characters:\n";
    while ((ch2 = cin.get()) != EOF) // EOF常量
    {
        cout << ch2;
        count2++;
    }
    cout << endl
         << count2 << " characters read\n";
    return 0;
}