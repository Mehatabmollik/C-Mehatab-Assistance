#include<iostream>
using namespace std;
int add(int a,float b)
{
    return a+b;
}
int add(float a,int b)
{
    return a+b;
}
int main()
{
    float x=add(5,5.4);
    float y=add(3.4,8);

    cout<<"Add is "<<x<<endl;
    cout<<"Sum is "<<y<<endl;
    return 0;
}
