#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
public:
    void accept();
    void display();
    void operator-();
};
void Matrix::accept()
{
    cout<<"Enter matrix element(3 x 3) "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" ";
            cin>>a[i][j];
        }
    }
}
void Matrix::display()
{
    cout<<"Matrix is :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" ";
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
void Matrix::operator-()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=-a[i][j];
        }
    }
}
int main()
{
    Matrix m;
    m.accept();
    m.display();
    -m;
    m.display();
    return 0;
}
