#include<iostream>
#include<cstring>
using namespace std;
bool isvalidemail_id(char *);
int main()
{
    char email[100];
    cout<<"Enter email id :"<<endl;
    cin.get(email,20);
    try
    {
        if(isvalidemail_id(email))
            cout<<"Valid Email id :"<<endl;
        else
            throw 'c';
    }
    catch( char c)
    {
        cout<<"Invalid Email id :"<<endl;
    }
    catch(...)
    {
        cout<<"Exception caught "<<endl;
    }

    return 0;
}


bool isvalidemail_id(char *email)
{
    int Atoffset=-1;
    int Dotoffset=-1;
    int length=0;
    for(int i=0;email[i]!='\0';i++)
    {
        if(email[i]=='@')
            Atoffset=i;
        else if(email[i]=='.')
            Dotoffset=i;

        length++;
    }
    if(Atoffset==-1 || Dotoffset==-1)
        return 0;
    if(Atoffset>Dotoffset)
        return 0;;

    return (Dotoffset<(length-3));
}
