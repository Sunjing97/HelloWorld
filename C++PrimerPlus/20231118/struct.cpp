#include <iostream>
#include <string>
using namespace std;

// 结构体:存储多种类型的数据
// 结构体、类尽量外部声明，除非限制在某一个函数内使用
struct Person
{
     char name[50];
     int age;
     char sex[10];
     string address;
} mymember = {
    "tom",
    19,
    "男",
    "英国"}; // 定义成员，也可以只定义不初始化

int main()
{
     Person members1 = {"sunjing", 19, "男"};
     cout << members1.name << "\t"
          << members1.age << "\t"
          << members1.sex << "\t\n";
     cout << "通过索引访问成员数组中的元素：\n"
          << members1.name[0] << endl;

     cout << "不给初值，全为0\n";
     Person members2 = {}; // 全为0
     members2.address = "China";
     cout << members2.name << "\t"
          << members2.age << "\t"
          << members2.sex << "\t"
          << members2.address << "\t\n";

     cout << "成员赋值：\n";
     Person members3 = members2;
     cout << members3.name << "\t"
          << members3.age << "\t"
          << members3.sex << "\t"
          << members3.address << "\t\n";
     /*
     Person members3;
     members3.name = "张三";//不可以
     members3.age = 20;
     members3.sex = "xx";
     */

     cout << "定义结构体时创建变量\n";
     cout << mymember.name << "\t"
          << mymember.age << "\t"
          << mymember.sex << "\t"
          << mymember.address << "\t\n";

     cout << "结构体数组\n";
     Person members4[10] = {
         {"sun", 20, "d", "nsi"},
         {"sn", 290, "d", "england"}};
     cout << members4[0].name << "\t"
          << members4[1].age << "\t"
          << members4[2].sex << "\t"
          << members4[3].address << "\t\n"
          << "以上未赋值的数组为0\n";

     return 0;
}