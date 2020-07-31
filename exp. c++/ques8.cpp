#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter how many enteries you want to give: ";
    cin>>n;
    int *a=new int[n];
    cout<<"enter the numbers of student";
    for(i=1;i<=n;i++)
    {
    cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
    }
   cout<<"average is:"<<sum/n;
   delete(a);
}

