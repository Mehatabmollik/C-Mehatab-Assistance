#include<iostream>
using namespace std;
class mystring
{
    char str[23];
public:
    void get_name()
    {
        cout<<"Enter the String :"<<endl;
        cin>>str;
    }
    void disp()
    {
        cout<<str;
    }
    void operator!();
};
void mystring::operator!()
{
    for(int i=0;str[i];i++)
    {
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
        else if(str[i]>=97 && str[i]<=122)
            str[i]=str[i]-32;

    }
    cout<<endl<<"Reverse case String is :"<<str<<endl;
}
int main()
{
    mystring m;
    m.get_name();
    cout<<"String is :"<<endl;
    m.disp();
    !m;
    return 0;

}
