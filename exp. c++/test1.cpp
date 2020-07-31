#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,c,a[1000],l,u,k;
    cout<<"enter number of elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                c=1;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        if(c==0)
        {
            break;
        }
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
      cout<<a[i]<<endl;
    }
    cout<<"enter searhing element:";
    cin>>k;
    int m;
   l=0;
   u=n-1;
   c=0;
   while(l<=u)
   {
      m=(l+u)/2;
      if(k==a[m])
      {
          c=1;
          cout<<"element is in"<<m+1<<"place";
          break;
      }
      else if(k>a[m])
      {
          l=m+1;
      }
      else
      {
          u=m-1;
      }
   }
   if(c==0)
   {
       cout<<"element not found";
   }
}
