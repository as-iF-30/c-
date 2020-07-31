#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"enter number:";
    cin>>n;
    r=n%9;
    if(n==0)
    {
        cout<<0;
    }
    else
    {
        if(r==0)
        {
            cout<<9;
        }
        else
        {
            cout<<r;
        }
    }
}
