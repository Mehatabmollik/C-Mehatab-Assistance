#include<iostream>

using namespace std;

class power
{
public:
    int x,y;
    void powercheck();
};

void power::powercheck()
{
    int result=1;
    while(y!=0)
    {
        y--;
        result=result*x;
    }
    cout<<"Power of No "<<result<<endl;
}
int main()
{
    power p;
    cout<<"Enter the no:"<<endl;
    cin>>p.x>>p.y;

    p.powercheck();
    return 0;
}
