#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char name[15];
    int roll;
    int age;
public:
    student(char x[],int y,int z)
    {
        strcpy(name,x);
        roll=y;
        age=z;
    }
    void display()
    {
        cout<<"name is "<<name<<" roll "<<roll<<" age "<<age<<endl;
    }
};
int main()
{
    student s("mehtab",23,19);
    s.display();
    return 0;
}
