#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    long long num;
    int cou=0;
    cout<<"Enter the no:"<<endl;
    cin>>num;
    try{
    while(num>0)
    {
      num=num/10;
      cou++;

    }
      if(cou==10)
        throw 1;
      if(cou!=10)
        throw 2;

       }
      catch(int num)
      {
          if(num==1)
            cout<<"Valid phone no"<<endl;
          if(num==2)
            cout<<"Invalid No:"<<endl;
      }
      return 0;
}
