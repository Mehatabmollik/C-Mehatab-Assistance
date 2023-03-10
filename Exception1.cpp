#include<iostream>
using namespace std;
void testtry(int num)
{
    const char *s="String Handling";

       try
       {
           if(num>=0 && num<=10)
            throw num;
           else
            throw s;
       }
       catch(int a)
       {
           cout<<"it is a single Integer "<<a<<endl;
       }
       catch(const char b[10])
       {
           cout<<b;
       }
}
int main()
{
    int num;
    cout<<"Enter anything "<<endl;
    cin>>num;

    testtry(num);
    return 0;
}
