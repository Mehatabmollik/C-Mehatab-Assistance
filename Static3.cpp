#include<iostream>
using namespace std;
class cube
{
    double side;
public:
    cube(double side1)
    {
        side=side1;
    }
    double volume()
    {
        return (side*side*side);
    }

};
int main()
{
    cube c(2.34);
    cout<<"volume is "<<c.volume();
    return 0;
}
