#include<iostream>
#include<cstring>

using namespace std;

class worker
{
protected:
    int code;
    char name[30];
    float salary;
public:
    worker(){}
    worker(int c,char *n,float s)
    {
        code=c;
        strcpy(name,n);
        salary=s;
    }
    void putw()
    {
        cout<<"Name is :"<<name<<endl;
        cout<<"Code is :"<<code<<endl;
        cout<<"salary is :"<<salary<<endl;
    }
};
class officer
{
protected:
    float da,hra;
    public:
    officer(){}
    officer(float d,float h)
    {
        da=d;
        hra=h;
    }
    void puto()
    {
        cout<<"Da is :"<<da<<endl;
        cout<<"Hra is :"<<hra<<endl;
    }
};
class manager :public worker,public officer
{
private:
    float ta;
    float gsal;
public:
    manager(){}
    manager(int c,char *n,float s,float d,float h):worker(c,n,s),officer(d,h)
    {

    }
    void putm()
    {
        putw();
        puto();
        ta=0.10*salary;
        cout<<"ta .. :"<<ta<<endl;
        gsal=da+hra+ta+salary;

        cout<<"Gross salary ..:"<<gsal<<endl;
    }
};
int main()
{
    int cnt,i,c;
    char name[20];

    float sala,da,hra;
    cout<<"Enter manager count :"<<endl;
    cin>>cnt;
    manager *m;

    m=new manager[cnt];

    for(i=1;i<=cnt;i++)
    {
        cout<<"Enter worker information :"<<i<<endl;
        cout<<"--------------------------"<<endl;

        cout<<"Enter code :"<<endl;
        cin>>c;

        cout<<"Enter name :"<<endl;
        cin>>name;

        cout<<"Enter salary :"<<endl;
        cin>>sala;

        cout<<"Enter da :"<<endl;
        cin>>da;

        cout<<"Enter HRA :"<<endl;
        cin>>hra;

        m[i]=manager(c,name,sala,da,hra);

    }
    for(i=1;i<=cnt;i++)
    {
        cout<<"-----------------"<<endl;
        cout<<"Manager Information :"<<endl;

        cout<<"--------------------:"<<endl;

        m[i].putm();
    }
    return 0;
}
