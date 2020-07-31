#include<iostream>
using namespace std;
int main()
{
    int *p;
    int x,t;
    int &y=t;
    p=&x;
    cin>>x;
    cin>>t;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<&x<<endl;
    cout<<y<<endl;
    cout<<++y<<endl;
    cout<<&y<<endl;
    cout<<t;

}
