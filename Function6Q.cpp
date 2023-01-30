#include<iostream>

using namespace  std;

void swapf(int &p,int &q)
{
    int temp=p;
    p=q;
    q=temp;
}
int main()
{
    int x,y;
    cout<<"Enter two no:"<<endl;
    cin>>x>>y;

    swapf(x,y);

    cout<<"x is "<<x<<"And y is "<<y<<endl;

    return 0;
}
