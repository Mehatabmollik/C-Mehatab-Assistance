#include<iostream>
using namespace std;
class counter
{
    static int Count;
public:
    counter()
    {
        Count++;
    }
    int getcount()
    {
        return Count;
    }
};
int counter::Count=0;
int main()
{
    counter c1,c2,c3;
    cout<<c1.getcount();
    return 0;

}
