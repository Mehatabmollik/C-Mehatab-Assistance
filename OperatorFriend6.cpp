#include<iostream>
#include<cstring>
using namespace std;
class CString
{
public:
    char str[20];
    void get_name()
    {
        cout<<"Enter string :"<<endl;
        cin>>str;
    }
    void disp()
   {
    cout<<str<<endl;
    }
    CString operator+(CString x)
    {
        CString s;
        strcpy(s.str,str);
        strcat(s.str,x.str);
        return s;
    }
    int operator==(CString &t);
};
int CString::operator==(CString &t)
{
    int equalornot=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=t.str[i])
        {
            equalornot=0;
            break;
        }
        return equalornot;
    }
}

int main()
{
    CString str1,str2,str3;
    int result=0;
    str1.get_name();
    str2.get_name();
    str3=str1+str2;
    cout<<"concatenate String "<<endl<<endl;
    str3.disp();
    result=(str1==str2);
    if(result==1)
    {
     cout<<endl<<"Both string are equal :"<<endl;
    }
    else
    {
     cout<<endl<<"Are not equal"<<endl;
    }
    return 0;
}
