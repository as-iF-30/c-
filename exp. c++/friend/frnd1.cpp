#include<iostream>
using namespace std;
class frnd
{
private:
    int a,b;
public:
    set(int x,int y)
    {
        a=x;
        b=y;
    }
    friend yo(frnd);//data type is of frnd type
};
yo(frnd c)//c is object to access object c1
{
    cout<<c.a+c.b;
}
int main()
{
    frnd c1;
    c1.set(2,4);
    yo(c1);
}
