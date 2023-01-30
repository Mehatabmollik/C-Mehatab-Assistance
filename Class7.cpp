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
    void findlarge()
    {
        maxi=(x>y)?(x>z)?x:z :(y>z)?y:z;
    }
    void print()
    {
        cout<<"Max is "<<maxi<<endl;
    }
};
int main()
{
    Largeno a(3,7,5);
    a.findlarge();
    a.print();

    return 0;
}
