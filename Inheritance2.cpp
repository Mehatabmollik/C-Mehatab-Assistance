#include<iostream>

using namespace std;

class A
{
public:
    int a;
    void get_a()
    {
        cout<<"Enter the 1st no: "<<endl;
        cin>>a;
    }

};
class B:public A
{
public:
    int b,c;
    void get_b()
    {
        cout<<"Enter 2nd no:"<<endl;
        cin>>b;
    }
    void result()
    {
    c=a+b;
    }

    void display()

    {
        cout<<"Sum of two no :"<<c<<endl;
    }
};
int main()
{
    B ob;
    ob.get_a();
    ob.get_b();
    ob.result();
    ob.display();

    return 0;
}
