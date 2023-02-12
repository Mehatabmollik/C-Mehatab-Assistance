#include<iostream>
using namespace std;
class Marks
{
public:

    int mark;
    Marks(int m)
    {
        mark=m;
    }
   Marks *operator->()
   {
       return this;
   }
   void display()
   {
       cout<<"Marks is "<<mark<<endl;
   }
};
int main()
{
    Marks m=55;
    m.display();
    m->display();

    return 0;
}
