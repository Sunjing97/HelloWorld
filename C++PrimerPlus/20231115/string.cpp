#include <iostream>
#include <string>
#include <cstring> //strlen strcpy strcat
using namespace std;
int main()
{
     char char1[20];
     char char2[20] = "jaguar";               // 美洲虎 捷豹
     string str1;                             // 可以用数组表示法表示对象中的字符
     string str2 = "panther";                 // 美洲豹 豹
     cout << "Enter another kind of feline:"; // 猫科动物
     cin >> char1;
     cout << "Enter another kind of feline:";
     cin >> str1;
     cout << "Here are some felines:\n";
     cout << char1 << " " << char2 << " " << str1 << " " << str2 << endl;
     cout << "The third letter in " << char2 << "is:" << char2[2] << endl;
     cout << "The third letter in " << str2 << "is:" << str2[2] << endl;

     string name1 = "hello";
     string name2 = "world";
     string name3;
     char cname1[20];
     char cname2[20] = "new";
     strcpy(cname1, cname2);
     cout << "strcpy(cname1,cname2) res:" << cname1 << endl;
     name3 = name2;
     cout << "name3 assign a value :" << name3 << endl; // assign 分配
     name3 = name1 + name2;
     name1 += name2;
     strcat(cname1, cname2); // cname2拼接到cname1后面
     cout << "name3 content:" << name3 << endl;
     cout << "name1 content:" << name1 << endl;
     cout << "strcat(cname1,cname2) res:" << cname1 << endl;
     int clen = strlen(cname1), slen = name3.size();
     // strlen C-style 求大小以'\0' 结束, .size()-->string类型求大小
     cout << "strelen(cname1) res:" << clen << endl
          << "name3.size() res:" << slen << endl;

     cin.get();
     string name4;
     cout << "Enter a line of text:\n";
     getline(cin, name4); // 友元函数 getline用于对str输入
     cout << "Your name4 content:\n"
          << name4;
     return 0;
}