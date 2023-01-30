#include<iostream>
using namespace std;
class static_count
{
    static int c;
public:
    void fun()
    {
        c++;
    }
    void show()
    {
        cout<<"Function call "<<c<<endl;
    }

};
int static_count::c=0;
int main()
{
    static_count s;
    s.fun();
    s.fun();
    s.show();
    return 0;
}
