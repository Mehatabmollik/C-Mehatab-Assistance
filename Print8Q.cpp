#include<iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Enter 2 no:"<<endl;
    cin>>x>>y;
    cout<<"Before swap x is "<<x<<endl<<"And y is "<<y<<endl;
    x=x*y;
    y=x/y;
    x=x/y;

    cout<<"After swap x is "<<x<<endl<<"and y is "<<y<<endl;

    return 0;
}
