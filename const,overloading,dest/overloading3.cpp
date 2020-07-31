//overloading of increment operand
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
        cout<<a<<endl;
    }
    cop operator++() //pre-increment
    {
        cop temp;
        temp.a=++a;
        return(temp);
    }
    cop operator++(int)//post-increment
    {
        cop temp;
        temp.a=a++;
        return(temp);
    }
};
main()
{
    cop c1,c2,c3;
    c1.setdata(3);
    c3=++c1;   //c3=c1.operator++ ();
    c2=c1++;
    c3.showdata();
    c2.showdata();
}


