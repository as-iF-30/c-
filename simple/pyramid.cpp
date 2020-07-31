#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter number of rows";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=(i*2-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}
