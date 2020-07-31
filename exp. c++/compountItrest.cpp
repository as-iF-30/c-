#include<iostream>
using namespace std;
int main()
{
    int t,i;
    float p,r,a;
    cout<<"enter initial amount:";
    cin>>p;
    cout<<"enter the rate:";
    cin>>r;
    cout<<"enter the time period";
    cin>>t;
    for(i=1;i<=t;i++)
    {
        p=p+p*(r/100);
    }
    cout<<"the final amount:"<<p;
}
