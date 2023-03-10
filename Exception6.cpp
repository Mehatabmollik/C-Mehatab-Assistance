#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    long long num;
    int cou=0;
    cout<<"Enter the pin no:"<<endl;
    cin>>num;
    try{
    while(num>0)
    {
      num=num/10;
      cou++;

    }
      if(cou==6)
        throw 1;
      if(cou!=6)
        throw 2;

       }
      catch(int num)
      {
          if(num==1)
            cout<<"Valid pin no"<<endl;
          if(num==2)
            cout<<"Invalid pin No:"<<endl;
      }
      return 0;
}

