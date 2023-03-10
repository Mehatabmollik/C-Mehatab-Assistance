#include<iostream>

using namespace std;

class student
{
public:

    int id;
    char name[40];
    void setdata()
    {
        cout<<"Enter student id :"<<endl;
        cin>>id;
        cout<<"Enter student name :"<<endl;
        cin>>name;
    }

};
class studentexam :public student
{
 public:
    int s1,s2,s3,s4,s5,s6;
    void input()
    {
        setdata();
        cout<<"Enter math no :"<<endl;
        cin>>s1;
        cout<<"Enter phy no :"<<endl;
        cin>>s2;
        cout<<"Enter chem no :"<<endl;
        cin>>s3;
        cout<<"Enter biology no :"<<endl;
        cin>>s4;
        cout<<"Enter english no :"<<endl;
        cin>>s5;
        cout<<"Enter computer no :"<<endl;
        cin>>s6;

    }
};
class studentresult : public studentexam
{
protected :
    float per;
    int sum;
public:
    void total()
    {
        sum=s1+s2+s3+s4+s5+s6;
    }

    void percentage()
    {
        per=(sum/600.0)*100.0;

    }
    void display()
    {
        cout<<"Percentage is :"<<per<<endl;
    }
};
int main()
{
    studentresult str;
    int cnt,i;
    cout<<"Enter no of student you want :"<<endl;
    cin>>cnt;
    for(i=1;i<=cnt;i++)
    {
       str.input();
       str.total();
       str.percentage();
       str.display();
    }

    return 0;
}

