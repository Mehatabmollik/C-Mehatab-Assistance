#include<iostream>
using namespace std;

class Distance
{
public:
    int feet,inch;
    Distance(){}
    Distance(int f,int i)
    {
        feet=f;
        inch=i;
    }
    Distance operator()(int a,int b,int c)
    {
        Distance d;
        d.feet=(a+c+5);
        d.inch=(a+b+15);
        return d;
    }
    void display()
    {
        cout<<"Feet "<<feet<<" inches "<<inch<<endl;
    }
};
int main()
{
    Distance d1(5,10);
    Distance d2;

    d1.display();
    d2=d1(10,20,30);

    d1.display();
    d2.display();

    return 0;
}
