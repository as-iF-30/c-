#include<iostream>
using namespace std;
class A
{
private:
    int a[3][3];
public:
    accept();
    display();
     operator +(A x);

};
A::accept()
{
    int i;
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        cout<<" ";
        cin>>a[i][j];
        }
    }
}
A::display()
{
    int i;
    for(i=0;i<3;i++)
    {
        cout<<" ";
        for(int j=0;j<3;j++)
        {
        cout<<a[i][j]<<"\t";
        }
         cout<<"\n";
    }
}
A::operator +(A x)
{
    int m[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        x.a[i][j]=a[i][j]+x.a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        cout<<" ";
        for(int j=0;j<3;j++)
        {
        cout<<x.a[i][j]<<"\t";
        }
         cout<<"\n";
    }
}

int main()
{
    A d,e,f;
    cout<<"enter the first matrix"<<endl;
    d.accept();
    cout<<"enter the second matrix"<<endl;
    e.accept();
    cout<<"first matrix"<<endl;
    d.display();
    cout<<"second matrix"<<endl;
    e.display();
    cout<<"addition"<<endl;
    d+e;

}
