#include<iostream>
using namespace std;
class Integer
{
public:
    int x;
    Integer(int y)
    {
        x=y;
    }
    operator int()
    {
        return x;
    }
};
int main()
{
    Integer i=5;
    int j=i;
    cout<<"No is "<<j<<endl;

    return 0;
}
