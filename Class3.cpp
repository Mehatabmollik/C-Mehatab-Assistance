#include<iostream>
using namespace std;

class Factorial
{
    int x;
    int fact;
public:
    Factorial(int a)
    {
        x=a;
    }
    void Factor()
    {
        fact=1;
        for(int i=1;i<=x;i++)
            fact=fact*i;
    }
    void print()
    {
        cout<<"Factorial of "<<x<<" is "<<fact<<endl;
    }

};
int main()
{
    Factorial f(5);
    f.Factor();
    f.print();
    return 0;
}
