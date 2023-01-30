#include<iostream>
using namespace std;
class Complex
{
public:
    int x,y;
public:
    void print()
    {
        cout<<"Complex is "<<x<<" + "<<y<<"i"<<endl;
    }
    friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.x=c1.x+c2.x;
    temp.y=c1.y+c2.y;
    return temp;
}
int main()
{
    Complex c1,c2,sum;
    cout<<"Enter two no "<<endl;
    cin>>c1.x>>c1.y;
    cout<<"Enter 2nd two no "<<endl;
    cin>>c2.x>>c2.y;

    sum=c1+c2;
    sum.print();
    return 0;

}
