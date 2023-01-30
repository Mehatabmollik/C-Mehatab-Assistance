#include<iostream>
using namespace std;

class digit
{
public:
    int x;
    void findmaxvalue();
};

void digit::findmaxvalue()
{
    int rem,maxi=-1;
    while(x!=0)
    {
        rem=x%10;
        if(maxi<rem)
            maxi=rem;
        x=x/10;
    }
    cout<<"Max value is "<<maxi<<endl;
}
int main()
{
    digit d;
    cout<<"Enter the No:"<<endl;
    cin>>d.x;

    d.findmaxvalue();
    return 0;
}
