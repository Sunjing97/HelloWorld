#include <iostream>
#include <string>
using namespace std;
int main()
{
    // C-style str
    char ch[] = "hello";
    char ch1[] = "hello";
    cout << "(ch == ch1) bool: " << (ch == ch1) << endl;
    // 比较的是首元素的地址
    cout << "strcmp(ch, ch1) bool: " << strcmp(ch, ch1) << endl;
    // strcmp 比较的是存放的元素，相同返回0
    // tony  tomw  n在m后 返回 1 不用比较y与w 比较的是ASCLL码
    // 第一个字符串在第二个字符串前-1
    // 第一个字符串在第二个字符串后 1

    // string 类:可以直接比较
    string word = "hello";
    cout << (word == "hello");

    return 0;
}