#include<iostream>
using namespace std;
class fraction
{
    int numo,deno;
public:
    fraction(long int n=0,long int d=0)
    {
        numo=n;
        deno=d;
    }
    friend void operator>>(istream &in,fraction &f)
    {
        cout<<"Numerator .."<<endl;
        in>>f.numo;
        cout<<"Denominator.."<<endl;
        in>>f.deno;
    }
    friend void operator<<(ostream &out,fraction &f)
    {
        out<<f.numo<<" / "<<f.deno;
    }
    fraction operator++()
    {
        ++numo;
        ++deno;
        return (*this);
    }
    fraction operator++(int s)
    {
        fraction old;
        old.numo=numo;
        old.deno=deno;
        numo++;
        deno++;
        return old;
    }
};
int main()
{
    fraction f1,f2;
    cout<<"Enter 1st Fraction "<<endl;
    cin>>f1;
    cout<<"F1 ++ "<<endl;
    f1++;
    cout<<f1<<endl;

    cout<<"++ F1"<<endl;
    ++f1;
    cout<<f1<<endl;

    cout<<"Enter 2nd fraction "<<endl;
    cin>>f2;

    f2=++f1;
    cout<<"F2 =++F1 "<<endl;
    cout<<"F1 : "<<endl;
    cout<<f1<<endl;

    cout<<"F2 :"<<endl;
    cout<<f2;
    f2=f1++;
    cout<<"F2 =++F1 "<<endl;
    cout<<"F1 : "<<endl;
    cout<<f1;

    cout<<"F2 :"<<endl;
    cout<<f2;
    return 0;
}
