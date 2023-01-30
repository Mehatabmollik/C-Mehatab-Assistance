#include<iostream>

using namespace std;

int main()
{
    int a[]={9,2,3,4,5,6,7,8,9,10};
    int i,sum=0;

    for(i=0;i<10;i++)
        sum=sum+a[i];

    cout<<"Sum of Element is "<<sum<<endl;
    return 0;
}
