#include<iostream>
using namespace std;

class Array
{
    int a[100];
    const int s=100;
public:
    Array()
    {

    }
    void setArray(int n,int index)
    {
        if(index>=s)
        {
            cout<<"Array index out of Bound,Exception"<<endl;
            exit(0);
        }
        a[index]=n;
    }
    void display(int index)
    {
        cout<<a[index]<<endl;
    }
    int operator[](int index)
    {
       if(index>=s)
        {
            cout<<"Array index out of Bound,Exception"<<endl;
            exit(0);
        }
        return a[index];
    }
};
int main()
{
    Array a;
    a.setArray(3,70);
    a.display(70);
    //cout<<a[70]<<endl;
    return 0;
}
