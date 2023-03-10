#include<iostream>

using namespace std;

class Marks
{
    protected:
        float mark1,mark2,mark3;
    public:

        void accept()
        {
            cout<<"Enter 3 marks :"<<endl;
            cin>>mark1>>mark2>>mark3;
        }

};
class Total :public Marks
{
protected:
    int sum;
public:
    void total()
    {
        sum=mark1+mark2+mark3;
    }

};
class percent : public Total
{
protected :
    float per;
public:

    void percentage()
    {
        per=(sum/300.0)*100.0;

    }
    void display()
    {
        cout<<"Percentage is :"<<per<<endl;
    }
};
int main()
{
    percent p;
    p.accept();
    p.total();
    p.percentage();
    p.display();

    return 0;
}
