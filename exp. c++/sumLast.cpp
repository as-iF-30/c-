#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0)
    {
        while(n!=0)
        {
            r=n%10;
            s=s+r;
            n=n/10;
        }
        if(s>9)
        {
            n=s;
            s=0;
        }
    }
    cout<<s;
}
