#include<iostream>
using namespace std;
int fac(int);
int main()
{
  int n;
  cout<<"enter the number";
  cin>>n;
  fac(n);
  cout<<fac(n);
}
int fac(int n)
{
    if(n>=1)
    {
        return n*fac(n-1);
    }
    else
    {
        return 1;
    }
}
