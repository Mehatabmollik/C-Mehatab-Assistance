#include<iostream>
using namespace std;
class Complex
{
public:
    int real,img;
    void display()
    {
        cout<<"real "<<real<<" img "<<img<<endl;
    }
    Complex(int x)
    {
        real=x;
        img=x;
    }
};
int main()
{
    Complex c(5);
    c.display();
    return 0;
}
