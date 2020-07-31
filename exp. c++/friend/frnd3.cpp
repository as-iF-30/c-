//overloading of binary operand
#include<iostream>

using namespace std;
class cop
{
private:
    int a,b;
public:
    setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    showdata()
    {
        cout<<a<<"\n"<<b;
    }
     friend cop operator+(cop, cop);
};
cop  operator+(cop d,cop e)
    {
        cop temp;
        temp.a=d.a+e.a;
        temp.b=d.b+e.b;
        return(temp);
    }
main()
{
    cop c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1+c2; //c3=c1.operator +(c2)
    c3.showdata();
}
