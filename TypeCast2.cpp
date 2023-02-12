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
    operator int ()
    {
        return (real+img);
    }
};
int main()
{
    Complex c=7;
    cout<<int (c);

    return 0;
}
