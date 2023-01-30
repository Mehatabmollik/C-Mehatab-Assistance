#include<iostream>
using namespace std;
class Number
{
    int x,y,z;
public:
    void accept()
    {
        cout<<"Enter 1st No:"<<endl;
        cin>>x;
        cout<<"Enter 1st No:"<<endl;
        cin>>y;
        cout<<"Enter 1st No:"<<endl;
        cin>>z;
    }
    void print()
    {
        cout<<"negotate No "<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
    void operator-(void)
    {
        x=-x;
        y=-y;
        z=-z;
    }
};
int main()
{
    Number num;
    num.accept();
    cout<<"Numbers are "<<"\t"<<endl;
    -num;
    num.print();
    return 0;
}
