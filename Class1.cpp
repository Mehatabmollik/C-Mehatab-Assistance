#include<iostream>
using namespace std;
class Complex{

int a;
int b;
public:
     Complex(int x,int y)
     {
         a=x;
         b=y;
     }
     void print()
     {
         cout<<"Number is "<<a<<" + "<<b<<"i"<<endl;
     }

};
int main()
{
    Complex c(2,4);
    c.print();

    return 0;
}
