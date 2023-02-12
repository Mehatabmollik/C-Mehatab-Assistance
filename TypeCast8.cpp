#include<iostream>
using namespace std;
class Rupee
{
    public :

        int r;

        Rupee()
        {
            cout<<"Dollar DC called"<<endl;
        }

        Rupee(int x)
        {
            cout<<"Dollar PC called"<<endl;
            r = x;
        }

        void display()
        {
            cout<<"Dollar = "<<r<<endl;
        }

        operator int()
        {
            cout<<"Dollar class int() called"<<endl;
            return r;
        }
};

int main()
{
    Rupee r=10;
    int x=r;
    cout<<x;

    return 0;
}



