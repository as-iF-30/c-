#include<iostream>
using namespace std;
int main()
{
    int i,j,n=1,a;
    cout<<"enter number of rows";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        for(j=a-1;j>=i;j--)
        {
            cout<<" ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<" "<<n<<" ";
            n++;
        }
        cout<<endl;
    }
}
