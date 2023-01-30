#include<iostream>
using namespace std;

int add(int x,int y,int z=0)
{
   return x+y+z;
}
int main()
{
    int s=add(2,3);
    int p=add(2,3,4);
    cout<<"Addition is "<<s<<endl;
    cout<<"Summation is :"<<p<<endl;

    return 0;
}
