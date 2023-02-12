#include<iostream>
using namespace std;
class Dollar
{
    public :

        int d;

        Dollar()
        {
            cout<<"Dollar DC called"<<endl;
        }

        Dollar(int x)
        {
            cout<<"Dollar PC called"<<endl;
            d= x;
        }

        void display()
        {
            cout<<"Dollar = "<<d<<endl;
        }

        operator int()
        {
            cout<<"Dollar class int() called"<<endl;
            return d;
        }
};

int main()
{
    int x=50;
    Dollar d;
    d=x;

    d.display();

    return 0;
}

