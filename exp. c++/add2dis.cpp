#include<iostream>
using namespace std;
class dis
{
public:
    int a,b;
    set()
    {
    cout<<"enter 1st distance in km:";
    cin>>a;
    cout<<"enter 2nd distance in km:";
    cin>>b;
    }

    add()
    {
        int c;
        c=a+b;
        cout<<"total distance:"<<c;
    }
};
int main()
{
    dis o;
    o.set();
    o.add();
}
