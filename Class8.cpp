#include<iostream>
using namespace std;
class Rectangle
{
    int l,b,a;
public:
    Rectangle(int x,int y)
    {
        l=x;
        b=y;
    }
    void findarea()
    {
        a=l*b;
    }
    void print()
    {
        cout<<"Area of "<<l<<" and "<<b<<" is "<<a<<endl;
    }
};
int main()
{
    Rectangle r(3,6);
    r.findarea();
    r.print();
    return 0;
}
