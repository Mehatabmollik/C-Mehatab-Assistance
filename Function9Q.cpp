#include<iostream>
using namespace std;

void maxi(int a,int b)
{
    if(a>b)
        cout<<"Big is "<<a<<endl;
    else if(b>a)
        cout<<"Big is "<<b<<endl;

}
void maxi(float a,float b)
{
    if(a>b)
        cout<<"Maxi is "<<a<<endl;
    else if(b>a)
        cout<<"Maxi is "<<b<<endl;
}
int main()
{
    int x,y;
    cout<<"Enter 2 no:"<<endl;
    cin>>x>>y;
    float a,b;
    cout<<"Enter 2 real no:"<<endl;
    cin>>a>>b;
    maxi(x,y);
    maxi(a,b);
    return 0;
}
