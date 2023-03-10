#include<iostream>
using namespace std;

int main()
{
    try
    {
        throw 1;
    }
    catch (int a)
    {
        cout<<"Exception caught "<<a<<endl;
    }
    catch (char e[10])
    {
        cout<<"Character Exception "<<e<<endl;
    }
    catch(...)
    {
        cout<<"other Exception "<<endl;
    }
    cout<<"Outside catch block"<<endl;

    return 0;
}
