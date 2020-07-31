#include<iostream>
using namespace std;
class A
{private:
        int a[3][3];
public:

    friend &operator<<(ostream &,A &l);
    friend &operator>>(istream &,A &l) ;
    operator +(A x);
    operator -(A x);
    operator *(A x);

};
&operator>>(istream &,A &l)
{
    int i;
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        cout<<" ";
        cin>>l.a[i][j];
        }
    }
}
&operator<<(ostream &out,A &l)
{
    int i;
    for(i=0;i<3;i++)
    {
        cout<<" ";
        for(int j=0;j<3;j++)
        {
        cout<<l.a[i][j]<<"\t";
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
A::operator -(A x)
{
    int m[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        a[i][j]=a[i][j]-x.a[i][j];
        }
    }
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
A::operator *(A x)
{
    int m[3][3],i,j,k,s=0;
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            s=0;
            for(k=0;k<3;k++)
            {
        s=s+a[i][k]*a[k][j];
            }
           x.a[i][j] =s;
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
    int n;
    cout<<"******** MD ASIF ********UID: 17BCS4166 ****************BATCH: CSE IBM CC2 \n\n";
    cout<<"enter 3x3 matrix";
    cout<<"enter the first matrix"<<endl;
    cin>>d;
    cout<<"enter the second matrix"<<endl;
    cin>>e;
    cout<<"first matrix"<<endl;
    cout<<d;
    cout<<"second matrix"<<endl;
    cout<<e;
    cout<<"press 1 for matrix addition"<<endl;
    cout<<"press 2 for matrix subtraction "<<endl;
    cout<<"press 3 for matrix multipication"<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
       cout<<"addition"<<endl;
        d+e;
        break;
    case 2:
        cout<<"subtraction"<<endl;
        d-e;
        break;
    case 3:
        cout<<"multipication"<<endl;
        d*e;
        break;
    default:
        cout<<"enter between 1-3"<<endl;
        break;
    }
}

