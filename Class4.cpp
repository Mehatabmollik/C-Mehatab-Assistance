#include<iostream>
using namespace std;
class Largeno
{
    int x,y,z,maxi;
public:
    Largeno(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void Largestprint()
    {
        maxi=(x>y)?(x>z)?x:z : (y>z)?y:z;
        cout<<"Large is "<<maxi;
    }

};
int main()
{
    Largeno a(40,50,10);
    a.Largestprint();

    return 0;
}
