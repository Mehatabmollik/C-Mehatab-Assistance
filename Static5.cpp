#include<iostream>
using namespace std;
class date
{
    int dd,mm,yy;
public:
    date(int d,int m,int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }
    void display()
    {
        cout<<"Date is "<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }
};
int main()
{
    date d(22,1,2023);
    d.display();
    return 0;
}
