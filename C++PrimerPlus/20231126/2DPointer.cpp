#include <iostream>
using namespace std;
int main()
{
    int number = 10;
    int *p1 = &number;
    int **p2 = &p1;
    cout << "number address:" << number << endl
         << "p1 content:" << p1 << " "
         << "*p1 content:" << *p1 << endl
         << "p1 address:" << &p1 << endl
         << "p2 content:" << p2 << " "
         << "*p2 content:" << *p2 << " "
         << "**p2 content:" << **p2 << endl;
    return 0;
}