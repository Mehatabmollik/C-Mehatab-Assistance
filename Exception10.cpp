#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char s[20];
    cout<<"enter  a nickname"<<endl;
    fflush(stdin);
    fgets(s,20,stdin);

    try
    {
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    if(count>8)
    {
     throw 'c';

    }
    for(int  i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0' &&s[i]<='9')
        {
          throw 1;
        }
        else if((s[i]>='!' && s[i]<='/') ||( s[i]>=':' &&  s[i]<='@')||(s[i]>='[' &&s[i]<='`')||(s[i]>='{'&&s[i]<='~') )
        throw 1.0;
        else if(s[i]==' ')
         throw "yash";
    }

    }catch(const char)
    {
        cout<<"exception error because character more than 8"<<endl;
        exit(0);

    }catch(int)
    {
        cout<<"exception error because it have number"<<endl;
        exit(0);
    }catch(double)
    {
        cout<<"exception error due to special character"<<endl;
        exit(0);
    }catch(const char*)
    {
        cout<<"exception due to space in nickname"<<endl;
        exit(0);
    }
    cout<<"nickname : "<<s<<endl;
}
