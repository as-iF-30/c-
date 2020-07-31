//error ....
#include<iostream>
using namespace std;
class A
{
public:
    fo(int x, int y)
    {
        cout<<x<<endl<<y;
    }
};
class B:virtual public A
{
    to()
    {
        cout<<"hi";
    }
};
class C:virtual public A
{
public:
    mo()
    {
        cout<<"hello";
    }
};
class D:public B,public C
{
public:
    fo()
    {
        cout<<"hi";
    }
};
main()
{
    D o1;
    o1.fo(5,4);

}

