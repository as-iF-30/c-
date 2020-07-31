
#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],i,k=0,l=0;
    for(i=1;i<=3;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=3;i++)
    {
        cin>>b[i];
    }
    for(i=1;i<=3;i++)
    {
    if(a[i]>b[i])
    {
        k++;
    }
    else if(a[i]<b[i])
    {
        l++;
    }
    }
    cout<<k<<" ";
    cout<<l;
}
