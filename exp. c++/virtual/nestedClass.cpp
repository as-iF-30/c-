//nested class
#include<iostream>
using namespace std;
class A
{
public:
    fo()
    {
        cout<<"hello";
    }
    class B
    {
    public:
        to()
        {
            cout<<"hi";
        }
    };
    B o;
};
main()
{
    A o1;
    o1.o.to();
}
