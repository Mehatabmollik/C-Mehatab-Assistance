#include<iostream>
using namespace std;
class Time
{
    int h;
    int m;
    int s;
public:
    Time(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void print()
    {
        cout<<"Time is "<<h<<" hour "<<m<<" min "<<s<<" sec "<<endl;

    }
};
int main()
{
    Time t(2,40,55);
    t.print();
    return 0;
}
