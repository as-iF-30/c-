//parent and child class having same function.
#include<iostream>
using namespace std;
class A
{
public:
    fun()
    {
        cout<<"hi"<<endl;
    }
};
class B:public A
{
public:
    fun()
    {
        cout<<"HELLO"<<endl;
    }
};
main()
{
    B o;
    o.fun();
    A o1;   //this will again give hello
    o1.fun();
    o.A::fun();

}
