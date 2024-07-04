#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // getline get 为istrem的成员函数
    char name1[20];
    char name2[20];

    cout << "Enter your name1:\n";
    cin.getline(name1, 10);
    // getline最多从缓存区读取9个，会自动加一个'\0'，丢弃缓存区换行符
    cout << "Actual length:" << sizeof(name1) << " Effective length:" << strlen(name1) << endl;

    cout << "Enter your name2:\n";
    cin.getline(name2, 10);
    cout << "Actual length:" << sizeof(name2) << " Effective length:" << strlen(name2) << endl;
    // cin.getline返回值为cin可以继续调用getline

    char name3[20];
    char name4[20];
    cout << "Enter yout content:\n";
    cin.getline(name3, 10).getline(name4, 10);
    cout << "Actual length:" << sizeof(name3) << " Effective length:" << strlen(name3) << endl;
    cout << "name1 content:" << name3 << endl;
    cout << "Actual length:" << sizeof(name4) << " Effective length:" << strlen(name4) << endl;
    cout << "name2 content:" << name4 << endl;

    cout << "What year was your house bulit?\n";
    int year;
    cin >> year; // 捕获缓存区的年份，cin不会丢弃换行符 cin碰到回车换行会跳过
    // cin.get();//先捕获换行
    // cin >> year;cin.get(); 变体 (cin >> year).get();捕获完年份再捕获换行
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80); // getline看到换行符，认为是一个空行，将空行赋值给address
    cout << "Year built:" << year << endl;
    cout << "Address:" << address << endl;
    cout << "Done!\n";
    // cin >> year;下一行不加cin.get();去先捕获换行，那么第二次输入的内容存到了test里
    char test[80];
    cin.getline(test, 80);
    cout << "test content:" << test << endl;
    return 0;
}