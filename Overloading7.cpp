#include<iostream>
using namespace std;
class Integer
{
    int i;
public:
    Integer(int x)
    {
        i=x;
    }
    int operator!()
    {
        return -i;
    }
};
int main()
{
    Integer x(10);
    cout<<!x;
    return 0;
}
