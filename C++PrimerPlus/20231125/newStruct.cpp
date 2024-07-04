#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
};

int main()
{
    Person *p = new Person;
    p->age = 20; // 剪头成员运算符
    // 不可用句点成员运算符，因为没有变量名
    p->name = "Tom";
    cout << "p->age:" << p->age << " "
         << "p->name:" << p->name << " "
         << "(*p).age:" << (*p).age << endl;
    delete p;
    return 0;
}