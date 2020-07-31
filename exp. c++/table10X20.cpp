#include<iostream>
using namespace std;
int main()
{
    int n,i,b;
    cout<<"enter the number:";
    cin>>n;
    b=n;
    for(i=1;i<=200;i++)
    {
        n=b;
        n=n*i;
        cout<<n<<"\t";
        if(i%10==0)
        {
            cout<<endl;
        }
    }
}
