#include<iostream>
using namespace std;
class item
{
public:
    int i;

    item(){}
    item(int x)
    {
        i=x;
    }
    void display()
    {
        cout<<"Item i "<<i<<endl;
    }
};
class Product
{
public:
    int x,y;
    Product(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"Result is "<<x<<" "<<y<<endl;
    }
    int getx(){return x;}
    int gety(){return y;}

    operator item()
    {
        return (x+y);

    }
};
int main()
{
   Product p(3,4);
    item i=p;
    p.display();
    i.display();
    return 0;
}
