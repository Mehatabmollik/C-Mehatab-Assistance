#include<iostream>
using namespace std;
class coords3d
{
private:
    double x,y,z;
public:
    coords3d()
    {
        //x=y=z=0;
    }
    coords3d(double x,double y,double z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void display()
    {
        cout<<"x= "<<x<<" y= "<<y<<" z= "<<z<<endl;
    }
    coords3d operator,(coords3d obj)
    {
        coords3d temp;
        temp.x=obj.x;
        temp.y=obj.y;
        temp.z=obj.z;

        return temp;
    }
};
int main()
{
    coords3d c1(1,4,2);
    coords3d c2(3,6,8);
    coords3d c3;

    c3=(c1,c2);
    c3.display();
    return 0;
}
