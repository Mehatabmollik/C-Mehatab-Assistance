#include<iostream>

using namespace std;

class item
{
    public:
        int itemno;
        char itemname[30];
        int itemprice;
};
class DiscountItem : public item
{
public:
    int discout_percent;
    int discount_price;

    void accept()
    {
        cout<<"Enter item name :"<<endl;
        cin>>itemname;
        cout<<"Enter item no :"<<endl;
        cin>>itemno;
        cout<<"Enter item price :"<<endl;
        cin>>itemprice;
        cout<<"Enter discount percent :"<<endl;
        cin>>discout_percent;

        cout<<"-----------"<<endl;

        discount_price=itemprice - itemprice *discout_percent/100;
    }
    void display()
    {
        cout<<"Item name :"<<itemname<<endl;
         cout<<"Item no :"<<itemno<<endl;
         cout<<"Item price :"<<itemprice<<endl;
         cout<<"Item discount percent :"<<discout_percent<<endl;
        cout<<"Item discount price :"<<discount_price<<endl;
    }
};
int main()
{
    int i,cnt,discount=0,price=0;
    DiscountItem dt[50];
    cout<<"How many item you want to enter :"<<endl;\
    cin>>cnt;

    for(i=1;i<=cnt;i++)
    {
        dt[i].accept();
    }
    for(i=1;i<=cnt;i++)
    {
        dt[i].display();
    }
    for(i=1;i<=cnt;i++)
    {
        price=price+dt[i].itemprice;
    }
    for(i=1;i<=cnt;i++)
    {
        discount=discount+dt[i].itemprice - dt[i].discount_price;

    }

    cout<<"Total price :"<<price<<endl;
    cout<<"Total discount :"<<discount<<endl;
    cout<<"Total payable :"<<(price - discount)<<endl;

     cout<<"Visit again "<<endl;

     return 0;

}
