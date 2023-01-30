#include<iostream>
using namespace std;
class circle
{
    int r;
    float a;
public:
    circle(int x)
    {
        r=x;
    }
    void findarea()
    {
        a=3.14*r*r;
    }
    void print()
    {
        cout<<"Area of "<<r<<" is "<<a<<endl;
    }
};
int main()
{
    circle c(5);
    c.findarea();
    c.print();
    return 0;
}

