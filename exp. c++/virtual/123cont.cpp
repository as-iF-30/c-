#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0,n;
    cout<<"enter number of rows";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            k++;
            cout<<k<<" ";
        }
        cout<<endl;
    }
}
