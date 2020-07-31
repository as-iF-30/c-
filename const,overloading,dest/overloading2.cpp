//overloading of uniary operand
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
    cop operator-()
    {
        cop temp;
        temp.a=-a;
        temp.b=-b;
        return(temp);
    }
};
main()
{
    cop c1,c2,c3;
    c1.setdata(3,4);
    c3=-c1;             //c3=c1.operator-();
    c3.showdata();
}

