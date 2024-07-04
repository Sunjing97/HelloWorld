#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char name1[20];
    char name2[20];
    cout<<"Enter yout name1:";
    //get最多从缓存区读取9个，会自动加一个'\0'
    cin.get(name1,10);//get保留换行符，留在缓存区中
    cout<<"Actual length:"<<sizeof(name1)<<" Effective length:"<<strlen(name1)<<endl;
    cout<<"name1 content:"<<name1<<endl;
    cout<<"Enter your name2:\n";
    cin.get();
    //防止上一个缓存区中的换行符使cin.get(name2,20)失效，先用cin.get()将换行符读出来
    cin.get(name2,20);//get会先读取上一次输入的缓存区中的换行
    cout<<"Actual length:"<<sizeof(name2)<<" Effective length:"<<strlen(name2)<<endl;
    cout<<"name2 content:"<<name2<<endl;
    //cin.get变体
    char name3[20];
    char name4[20];
    cout<<"Enter yout name3:";
    cin.get(name1,10).get();//cin.get返回值为cin可以继续调用get，直接将回车读取
    cout<<"Actual length:"<<sizeof(name3)<<" Effective length:"<<strlen(name3)<<endl;
    cout<<"name1 content:"<<name3<<endl;
    cout<<"Enter your name4:\n";
    cin.get(name2,20).get();
    cout<<"Actual length:"<<sizeof(name4)<<" Effective length:"<<strlen(name4)<<endl;
    cout<<"name2 content:"<<name4<<endl;
    return 0;
}