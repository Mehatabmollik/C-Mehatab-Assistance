#include<iostream>
using namespace std;
class Invent1
{
public:
    float x;
    operator float()
    {
        return x;
    }
};
class Invent2
{
    float y;
public:
       Invent2(Invent1 i)
       {
           y=i.x;
       }
};
int main()
{
    Invent1 x(4);
    Invent2 y;
    float z;
    z=x;
    y=x;
    return 0;
}
