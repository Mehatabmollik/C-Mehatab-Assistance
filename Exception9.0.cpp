#include<iostream>
using namespace std;
bool isvalidemail(char *);
int main()
{
    char s[25];
    cout<<"enter a email"<<endl;
    fflush(stdin);
    fgets(s,25,stdin);
    try
    {
        if(isvalidemail(s))
        {
         cout<<"email is vaild";
        }
        else
        throw 1;
    }catch(int)
    {
        cout<<"error invalid email"<<endl;
    }catch(...)
    {
        cout<<"default exception"<<endl;
    }
    return 0;

}
bool isvalidemail(char* s)
{
    int count1=-1,count2=-1,length=0;
    for(int i=0;s[i]!='\0';i++)
    {
       if(s[i]=='@')
       count1=i;
       if(s[i]=='.')
       count2=i;
      length++;
    }
    if(count1== -1&&count2== -1)
    return 0;
    if(count1>count2)
    return 0;
    return(count2<(length-3));
}
