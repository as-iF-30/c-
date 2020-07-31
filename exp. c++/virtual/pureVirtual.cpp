//Abstract class and do nothing function
#include<iostream>
using namespace std;
class A
{
public:
    virtual fun()=0;//virtual is used so that it can't be used through pointer.
    f1() //all function in abstract class become abstract or virtual and can be used by base class.
    {
        cout<<"hello";
    }
};
class B:public A//so that we can use fun of class A.
{
public:
    fun()// same function must be made.
    {
        cout<<"hi";
    }
};
int main()
{
    B o1;
    o1.f1();
    o1.fun();
}
