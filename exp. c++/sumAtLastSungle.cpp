//calculate sum of digit till it become single digit
#include<iostream>
using namespace std;
int sum(int);
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    sum(n);
    cout<<sum(n);
}
int sum(int n)
{
    int sum=0;
    while(n>0||sum>9)
      {
          if(n==0)
    {
        n=sum;
        sum=0;
    }
    sum=sum+n%10;
    n=n/10;
      }
      return sum;
}

