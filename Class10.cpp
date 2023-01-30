#include<iostream>
using namespace std;
class Area
{
    int i,j,k;
    float a;
public:
    void findarea(int r)
    {
        a=3.14*r*r;
    }
    void rectangle(int l,int b)
    {
        j=l*b;
    }
    void square(int s)
    {
        k=s*s;
    }

    void print()
    {
        cout<<"Area of "<<a<<endl;
        cout<<"Rectangle "<<j<<endl;
        cout<<"Square is "<<k<<endl;
    }
};
int main()
{
    Area c;
    c.findarea(7);
    c.rectangle(2,6);
    c.square(4);
    c.print();
    return 0;
}


