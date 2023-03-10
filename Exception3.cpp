#include<iostream>
using namespace std;

int main()
{
    float num1,num2,ans;
    char operate;

    try
    {
        cout<<"Enter 1st no:"<<endl;
        cin>>num1;

        cout<<"Enter operator :"<<endl;
        cin>>operate;
        if(operate!='+' && operate!='-' && operate!='*' && operate!='/' && operate!='%' )
         throw operate;

        cout<<"Enter 2nd No:"<<endl;
        cin>>num2;

    switch(operate)
    {
        case '+':
                ans=num1+num2;
                break;
        case '-':
                 ans=num1-num2;
                 break;
        case '*':
                 ans=num1*num2;
                  break;
        case '/':if(num2==0)
                 throw 0;
                  ans=num1/num2;
                  break;

    }
    //cout<<"Answer is "<<num1<<" "<<operate<<" "<<num2<<" = "<<ans<<endl;
    }
    catch(int a)
    {
        cout<<"Bad operation "<<a <<" Error "<<endl;
    }
    catch(const char b)
    {
        cout<<"Operator not valid "<<"Exception caught :"<<endl;
    }
    return 0;
}
