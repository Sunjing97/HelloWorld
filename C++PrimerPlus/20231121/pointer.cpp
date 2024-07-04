#include <iostream>
using namespace std;
int main()
{
     int number = 6; // type:int value:6 address:存储在地址中
     // int number = 6 静态联编 编译时创建
     cout << "number address:" << &number << endl;
     int *p1 = &number; // p为指针类型 *p为整形
     cout << "p1 content:" << p1 << " "
          << "*p1 content:" << *p1 << " "
          << "*p1 address:" << &p1 << endl;

     int *p2 = new int; // new 运行阶段，才创建 动态联编
     *p2 = 12;
     cout << "*p2 =" << *p2 << " "
          << "p2=" << p2 << endl;
     delete p2; // 释放内存，删除了p2指向的内存，但是不会删除ps本身
     // delete只能释放new分配的内存
     int *p3 = new int(10);
     cout << "*p3 =" << *p3 << " "
          << "p3=" << p3 << endl;
     delete p3;

     int *p4 = new int[3];
     cout << "&访问数组" << &p4[0] << " " << &p4[1] << " " << &p4[2] << endl;
     cout << "指针访问数组" << p4 << " " << p4 + 1 << " " << p4 + 2 << endl;
     delete[] p4; // 从起始位置delete     若进行p4=p4+1再delete则少释放了一个地址

     int *pt;
     // pt = 0xB8000000; 右值为十六进制数，左值是地址，不可进行赋值
     pt = (int *)0xB8000000;
     cout << "pt address:" << pt << endl;
     return 0;
}