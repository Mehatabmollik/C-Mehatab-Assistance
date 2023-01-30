#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
public:
    void setTime(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void showTime()
    {
        cout<<"Time is "<<h<<" hour "<<m<<" min "<<s<<" sec "<<endl;
    }
    void normalize()
    {
        m=m+s/60;
        s=s%60;
        h=h+m/60;
        m=m%60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.s=s+t.s;
        temp.m=m+t.m;
        temp.h=h+t.h;
        temp.normalize();
        return temp;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(3,55,54);
    t2.setTime(6,59,66);

    t3=t1.add(t2);
    t1.showTime();
    t2.showTime();
    t3.showTime();
    return 0;
}
