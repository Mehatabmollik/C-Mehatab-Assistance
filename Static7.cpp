#include<iostream>
using namespace std;

class Box
{
    int l,h,b,area;
public:
    Box(int x,int y,int z)
    {
        l=x;
        h=y;
        b=z;
    }
    void volume()
    {
        area=l*b*h;
    }
    void print()
    {
        cout<<"Volume is "<<area<<endl;
    }
};
int main()
{
    Box b(2,3,4);
    b.volume();
    b.print();
    return 0;
}
