#include<iostream>
using namespace std;
int area(int r)
{
    float a=3.14*r*r;
    return a;
}
int area(int h,int w)
{
    int b=h*w;
    return b;
}
int area(float h,int w)
{
    int c=1/2*h*w;
    return c;
}
int main()
{
    int x=area(5);
    int y=area(5,8);
    int z=area(4,3);

    cout<<"Area of circle "<<x<<endl;
    cout<<"Area of rectangle "<<y<<endl;
    cout<<"Area of triangle "<<z<<endl;
    return 0;
}
