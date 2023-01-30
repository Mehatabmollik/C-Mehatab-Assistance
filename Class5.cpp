#include<iostream>
using namespace std;
class rever
{
    int x;
    int r;
public:
    rever(int a)
    {
        x=a;
    }
    void reversc()
    {
        int n=x;
        r=0;
       while(n!=0)
       {
            r=r*10+n%10;
            n=n/10;
       }
    }
    void print()
    {
        cout<<"reverse of "<<x<<" is "<<r<<endl;
    }
};
int main()
{
    rever r(123);
    r.reversc();
    r.print();

    return 0;
}
