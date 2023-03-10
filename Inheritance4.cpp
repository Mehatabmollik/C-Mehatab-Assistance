#include<iostream>

using namespace std;

class person
{
protected:
    char pname[50],address[50];
    long long phn_no;
};
class Employee :public person
{
public:
    int eno;
    char ename[50];
};
class Manager: public Employee
{
public:
    char designation[50],deptname[50];
    float basic_salary;

    void accept()
    {
        cout<<"Enter details of manager :"<<endl;
        cout<<"---------------------------"<<endl;

        cout<<"Enter Employee no :"<<endl;
        cin>>eno;
        cout<<"Enter name "<<endl;
        cin>>ename;
        cout<<"Enter address "<<endl;
        cin>>address;
        cout<<"Enter designation :"<<endl;
        cin>>designation;
        cout<<"Enter phone no :"<<endl;
        cin>>phn_no;
        cout<<"Enter department name :"<<endl;
        cin>>deptname;
        cout<<"Enter basic salary :"<<endl;
        cin>>basic_salary;
    }
};


int main()
{
    int i,cnt ,temp;
    Manager man[50];

    cout<<"How many manager you want to Enter :"<<endl;
    cin>>cnt;

    for(i=1;i<=cnt;i++)
    {
        man[i].accept();
    }
    temp=0;

    for(i=1;i<=cnt;i++)
    {
        if(man[temp].basic_salary < man[i].basic_salary)
            temp=i;
    }
    cout<<"Manager with highest salary :"<<man[temp].basic_salary<<endl;
    cout<<" and manager name is :"<<man[temp].ename<<endl;

    return 0;
}
