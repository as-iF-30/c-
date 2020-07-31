//member of one function frnd of other
#include<iostream>
using namespace std;
class a
{
public:
    frnd()
    {
        cout<<"hello";
    }
};
class b
{
    //friend class a;  //if u want to make all func frnd of b
    friend a::frnd();
};
int main()
{
    a o;
    b c;
    o.frnd();
}
