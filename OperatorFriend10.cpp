#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
public:
    void accept();
    void display();
    void operator+(Matrix x);
};
void Matrix::accept()
{
    cout<<"Enter matrix element(3 x 3) "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
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
            cout<<a[i][j]<<endl;
        }
        cout<<"\n";
    }
}
void Matrix::operator+(Matrix x)
{
    int mat[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            mat[i][j]=a[i][j]+x.a[i][j];
        }
    }
    cout<<"Addition of matrix :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<mat[i][j]<<endl;
        }
        cout<<"\n";
    }
}
int main()
{
    Matrix M,N;
    M.accept();
    N.accept();
    M+N;
    return 0;
}
