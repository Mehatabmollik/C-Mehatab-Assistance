#include<iostream>
using namespace std;
class square
{
    int x;
    static int c;
    int i;
public:
    square(int a)
    {
        x=a;
    }
    void sqr()
    {
        c++;
        i=x*x;
    }
    void print()
    {
        cout<<"Function call is "<<c<<endl;
        cout<<"square is "<<i<<endl;
    }
};
int square::c=0;
int main()
{
    square s(5);
    square a(9);
    s.sqr();
    a.sqr();
    s.print();
    a.print();
    return 0;
}
