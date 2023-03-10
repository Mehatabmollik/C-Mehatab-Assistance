#include<iostream>
#include<cstring>
using namespace std;
class person
{
protected:
    char name[20];
    int age;
public:
    void setname(const char *c)
    {
        strcpy(name,c);
    }
    void setage(int a)
    {
        age=a;
    }
    char *getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
};
class Employee : public person
{
    int empid;
    int salary;
public:
    void setid(int id)
    {
        empid=id;
    }
    void setsalary(int s)
    {
       salary=s;
    }
    int getid()
    {
        return empid;
    }
    int getsalary()
    {
        return salary;
    }
    void display()
    {
        cout<<"Name :"<<name <<" Age :"<<age <<" Empid :"<<empid <<" Salary :"<<salary<<endl;
    }
};
int main()
{
    Employee e;
    e.setname("Mehtab");
    e.setage(18);
    e.setid(2);
    e.setsalary(20000);
    e.display();

    return 0;
}
