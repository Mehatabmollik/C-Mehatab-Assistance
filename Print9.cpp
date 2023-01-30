#include<iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Enter 2 no:"<<endl;
    cin>>x>>y;

    if(x>y)
        cout<<x<<" is Big";
    else if(x==y)
        cout<<"Both are Equal";
    else if(y>x)
        cout<<y<<" is Big";

    return 0;
}
