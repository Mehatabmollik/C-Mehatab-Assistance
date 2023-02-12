#include<iostream>
using namespace std;
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
};
class item
{
public:
    int i;

    item(){}
    item(Product p)
    {
        i=p.getx()+p.gety();
    }
    void display()
    {
        cout<<"Item i "<<i<<endl;
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
