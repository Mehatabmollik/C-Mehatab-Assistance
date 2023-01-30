#include<iostream>
using namespace std;
class ebill
{
    char name[10];
    int no;
    int bill;
    int units;
public:
    void give()
    {
        cout<<"Enter customer name :"<<endl;
        cin>>name;
        cout<<"Enter customer no :"<<endl;
        cin>>no;
        cout<<"Enter units :"<<endl;
        cin>>units;
    }
    void show()
    {
        cout<<"Enter customer details"<<endl;
        cout<<"customer name :"<<name<<endl;
        cout<<"Customer no:"<<no<<endl;
        cout<<"Customer bill :"<<bill<<endl;
        cout<<"customer units :"<<units<<endl;
    }
    void calculate()
    {
     if(units<=100)
            bill=units*1.20;
     else if(units<=200)
            bill=100*1.20+(units-100)*2;
     else
        bill=100*1.20+100*2+(units-200)*3;
    }
};
int main()
{
    ebill b1;
    b1.give();
    b1.calculate();
    b1.show();

    return 0;
}
