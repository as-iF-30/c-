#include<iostream>
using namespace std;
int main()
{
    int a,b,n,sum,sub,div,mut,rem;
    cout<<"enter the value of a=";
    cin>>a;
    cout<<"enter value of b=";
    cin>>b;
    cout<<"***what do you want to do***\n";
    cout<<"press 1 for sum\n";
    cout<<"press 2 for sub\n";
    cout<<"press 3 for div\n";
    cout<<"press 4 for mut\n";
    cout<<"press 5 for rem\n";
    cout<<"enter you choice";
    cin>>n;
    switch(n)
    {
    case 1:
        sum=a+b;
        cout<<sum;
        break;
    case 2:
        sub=a-b;
        cout<<sub;
        break;
    case 3:
        div=a/b;
        cout<<div;
        break;
    case 4:
        mut=a*b;
        cout<<mut;
        break;
    case 5:
        rem=a%b;
        cout<<rem;
        break;
        default:
            cout<<"you have choosen wrong\nchoose between 1-5\n";
    }
}
