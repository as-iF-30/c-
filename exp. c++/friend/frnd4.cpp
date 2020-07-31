//overloading of uniary operand
#include<iostream>
using namespace std;
class cop
{
private:
    int a;
public:
    setdata(int x)
    {
        a=x;
    }
    showdata()
    {
        cout<<a;
    }
     friend cop operator-(cop);
};
cop  operator-(cop d)
    {
        cop temp;
        temp.a=-d.a;
        return(temp);
    }
main()
{
    cop c1,c2,c3;
    c2.setdata(5);
    c3=-c2; //c3=c1.operator +(c2)
    c3.showdata();
}
