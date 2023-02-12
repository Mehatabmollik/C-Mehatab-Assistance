#include<iostream>
using namespace std;
class Time
{
    int hour,minu;
public:
    Time(){}
    Time(int duration)
    {
        hour=duration/3600;
        minu=(duration%3600)/60;
    }
    void display()
    {
        cout<<"Time is "<<hour <<" hour "<<minu<<" minute"<<endl;
    }
};
int main()
{
    int duration=4000;
    Time t=duration;
    t.display();

    return 0;
}
