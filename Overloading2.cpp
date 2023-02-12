#include<iostream>
using namespace std;
class Complex
{
public:
    int x,y;
public:
    void setData(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void display()
    {
        cout<<"Complex is "<<x<<" + "<<y<<"i"<<endl;
    }

};
int main()
{
    Complex c;

    cout<<"Enter two no"<<endl;
    cin>>c.x>>c.y;

    c.setData(c.x,c.y);
    c.display();
    return 0;
}
