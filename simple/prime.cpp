#include<iostream>
using namespace std;
int main()
{
    int a,c=0,i;
    cout<<"enter the number"<<endl;
    cin>>a;
    for(i=1;i<=a;i++)
    {

        if(a%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
       cout<<"given number is prime";
    }
    else
    {
        cout<<"not prime";
    }

}
