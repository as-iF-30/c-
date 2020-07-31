//UNIQUE NUMBER IN ARRAY.
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int a[20],i,j,n,f[20],c;
    cout<<"enter number of elements u want to enter:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        f[i]=1;
    }
    for(i=1;i<=n;i++)`
    {
        c=1;
        for(j=i+1;j<=n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=c;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(f[i]==1)
        {
        cout<<"unique element"<<a[i]<<endl;
        }
    }
}

