//ENTER 5 ELEMENTS AND DISPLAY IT
#include<iostream>
using namespace std;
int main()
{
    int n,a[10],i;
    cout<<"how many numbers u want to display:";
    cin>>n;
    cout<<"enter numbers"<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        cout<<"array "<<i<<":"<<a[i]<<endl;
    }
}
