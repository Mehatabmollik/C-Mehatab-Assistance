#include<iostream>
using namespace std;
class student
{
    int age;
    string name;
public:
    student()
    {
        cout<<"Default constructor is called:"<<endl;
    }
    student(string n,int a)
    {
        name=n;
        age=a;
    }
    void display()
    {
        cout<<"name "<<name<<endl;
        cout<<"age "<<age<<endl;
    }
    void * operator new(size_t size)
    {
      cout<<"new operator overloading with size :"<<size<<endl;
      void *p=malloc(size);
      return p;
    }
    void operator delete(void *p)
    {
        cout<<"overloading delete operator :"<<endl;
        free(p);
    }
};
int main()
{
    student *p=new student ("Yash",23);
    p->display();

    delete p;
}
