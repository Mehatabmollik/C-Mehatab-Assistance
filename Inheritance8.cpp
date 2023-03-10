#include<iostream>

using namespace std;

class customer
{
    char nm[20];
    long long phn_no;
public:
    void acceptc()
    {
        cout<<"Enter customer name :"<<endl;
        cin>>nm;
        cout<<"Enter phone no :"<<endl;
        cin>>phn_no;
    }
    void dispc()
    {
        cout<<"customer details :"<<endl;
        cout<<"------------------"<<endl;

        cout<<"Customer name :"<<nm<<endl;
        cout<<"Customer phone no :"<<phn_no<<endl;
    }
};
class deposit :public customer
{
    int acc_no,balance;
public:
    void acceptd()
    {
        cout<<"Enter account no of depositor :"<<endl;
        cin>>acc_no;
        cout<<"Enter balance :"<<endl;
        cin>>balance;
    }
    void dispd()
    {
        cout<<"Depositor acc no :"<<acc_no<<endl;
        cout<<"Balance :"<<balance<<endl;
    }
};

class borrower :public deposit
{
    int loan_no,loan_amt;
public:
    void acceptb()
    {
        cout<<"Enter loan no of borrower :"<<endl;
        cin>>loan_no;
        cout<<"Enter loan amount :"<<endl;
        cin>>loan_amt;
    }
    void dispb()
    {
        cout<<"Borrower loan no :"<<loan_no<<endl;
        cout<<"Loan amount :"<<loan_amt<<endl;
    }
};

int main()
{
    borrower *b1;
    int n,i;
    cout<<"Enter no of customer details you want :"<<endl;
    cin>>n;
    b1=new borrower[n];
    for(i=1;i<=n;i++)
    {
        b1[i].acceptc();
        b1[i].acceptd();
        b1[i].acceptb();

    }
    for(i=1;i<=n;i++)
    {
        b1[i].dispc();
        b1[i].dispd();
        b1[i].dispb();
    }
    return 0;
}
