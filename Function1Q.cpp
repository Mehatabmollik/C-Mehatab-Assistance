#include<iostream>

using namespace std;
class prime
{
public:
    int x;
    void checkprime();
};
void prime::checkprime()
{
    int i;
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
            break;
    }
    if(x==i)
        cout<<"Prime"<<endl;
    else
        cout<<"Not"<<endl;
}
int main()
{
    prime p;
    cout<<"Enter the No:"<<endl;
    cin>>p.x;

    p.checkprime();

    return 0;
}
