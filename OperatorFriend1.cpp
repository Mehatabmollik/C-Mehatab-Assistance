#include<iostream>
using namespace std;
class Complex
{
public:
    int x,y;
public:
    Complex()
    {

    }
    Complex(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"Complex is "<<x<<" + "<<y<<"i"<<endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.x=x-c.x;
        temp.y=y-c.y;
        return temp;
    }
    Complex operator*(Complex c)
    {
        Complex temp;
        temp.x=x*c.x;
        temp.y=y*c.y;
        return temp;
    }
    bool operator==(Complex c)
    {
        if(x==c.x && x==c.y)
            return true;
        else
            return false;
    }
};
int main()
{
    int x,y;
    cout<<"Enter two no"<<endl;
    cin>>x>>y;
    Complex c1(x,y),c2,c3(5,2);
    c2=c1+c3;
    c2.print();
    c2=c1-c3;
    c2.print();
    c2=c1*c3;
    c2.print();
    cout<<"compare is "<<(c1==c3)<<endl;

    return 0;
}
