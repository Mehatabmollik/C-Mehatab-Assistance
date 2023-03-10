#include<iostream>
using namespace std;
int main()
{
  int count=0;
    char s[50];
    cout<<"enter  username : "<<endl;
    fflush(stdin);
    fgets(s,50,stdin);
   try
    {
        for(int i=0;s[i]!='\0';i++)
        {
          count++;
        }
        if(count<6)
        {
          throw 1;
        }
        for(int i=0;s[i]!='\0';i++)
      {
           if(s[i]>='0' && s[i]<='9')
         throw"yash";
        else  if(s[i]>='!' && s[i]<='.'||s[i]>=':' && s[i]<='@' || s[i]>='[' && s[i]<='`' || s[i]>='{' && s[i]<='~')
         throw 's';

      }
    }catch(int )
    {
      cout<<"exception username  invalid"<<endl;
      exit(0);
    }catch(const char*)
    {
      cout<<"error username have take number"<<endl;
      exit(0);
    }catch(char)
    {
      cout<<"error username have take special character"<<endl;
        exit(0);
    }
    cout<<"username is valid"<<endl;

 return 0;
}

