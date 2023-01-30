#include<iostream>
using namespace std;
class Num
{
    int n;
public:
    void setNum(int x)
    {
        n=x;
    }
    void dispNum()
    {
        cout<<"No is "<<n<<endl;
    }
    void operator++(void)
    {
        n=++n;
    }
    void operator++(int)
    {
        n=n++;
    }
    void operator--(void)
    {
        n=--n;
    }
    void operator--(int)
    {
        n=n--;
    }

};
int main()
{
    Num num;
    num.setNum(10);
    ++num;
    cout<<"After increment "<<endl;
    num.dispNum();

    --num;
    cout<<"After decrement "<<endl;
    num.dispNum();
    cout<<endl;
    return 0;
}
