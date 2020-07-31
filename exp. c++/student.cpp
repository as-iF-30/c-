#include<iostream>
using namespace std;
class st
{
public:
    set(int x,string y,string z)
    {
        cout<<"details:"<<endl;
        cout<<"ROLL NO.:"<<x<<endl;
        cout<<"NAME:"<<y<<endl;
        cout<<"CLASS:"<<z<<endl;
    }
};
int main()
{
    int a;
    string b,c;
    st o;
    cout<<"enter the ROLL NO. of student:";
    cin>>a;
    cout<<"enter the name of student:";
    cin>>b;
    cout<<"enter the class of student:";
    cin>>c;
    o.set(a,b,c);

}
