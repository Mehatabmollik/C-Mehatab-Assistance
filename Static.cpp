#include<iostream>
using namespace std;
class comp
{
    int x,y;
public:
    comp()
    {

    }
    void setdata(int a,int b)
    {
        x=a;
        y=b;
    }
    comp(int a,int b)
    {
        x=a;
        y=b;
    }
    void showdata()
    {
        cout<<"Complex add "<<x<<" + "<<y<<"i"<<endl;
    }
    comp add(comp c)
    {
        comp temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;
    }
};
int main()
{
    comp c1,c2;
    c1.setdata(6,5);
    c2.setdata(3,2);
    comp c=c1.add(c2);
    c.showdata();
    return 0;
}
