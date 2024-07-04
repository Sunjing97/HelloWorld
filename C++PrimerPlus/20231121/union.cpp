#include <iostream>
using namespace std;
// 共用体每次只能存储一种类型
union id
{
    int intId;
    long longId;
    char cId[100];
};

// 匿名共用体
struct test
{
    union
    {
        int int_val;
        char ch_val;
    };
    int n;
};

int main()
{
    id id;
    cout << "Enter your id.cId\n";
    cin >> id.cId;
    cout << "char cId:" << id.cId << endl;

    id.intId = 10086;
    cout << "int intId:" << id.intId << endl;
    cout << "test:char cId:" << id.cId << endl; // char is lost

    id.longId = 10000086;
    cout << "long longId:" << id.longId << endl;
    cout << "test:int intId:" << id.intId << endl; // int is lost

    test test;
    test.int_val = 200; // 共用体是匿名的，int_val、ch_val可以视为test的成员
    cout << "Enter yout ch_val:\n";
    cin >> test.ch_val;
    cout << "test.int_val:" << test.int_val
         << "test.ch_val:" << test.ch_val << endl;
    return 0;
}