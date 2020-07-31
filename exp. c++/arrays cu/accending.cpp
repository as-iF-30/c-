//ENTER 5 ELEMENTS AND DISPLAY IN ASCENDING ORDER .
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a[10],i,j,t,n;
    cout<<"enter number of elements";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(j=1;j<=n-1;j++)
    {
        for(i=1;i<=n-j;i++)
        {
           if(a[i]>a[i+1])
           {
               t=a[i];
               a[i]=a[i+1];
               a[i+1]=t;
           }
        }

    }
    for(i=1;i<=n;i++)
    {
        cout<<a[i];
    }
}
