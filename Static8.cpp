#include<iostream>
using namespace std;
class bank
{
    float p;
    float r;
    float t;
    float si;
public:
    void fun()
    {
        cout<<"Enter principal "<<endl;
        cin>>p;
        cout<<"Enter rate of interest "<<endl;
        cin>>r;
        cout<<"Enter time "<<endl;
        cin>>t;
        si=(p*r*t)/100;
    }
    void show()
    {
        cout<<"Simple interest is "<<si<<endl;
    }
};
int main()
{
    bank b;
    b.fun();
    b.show();
    return 0;
}
