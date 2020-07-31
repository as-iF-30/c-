#include<iostream>
using namespace std;
class asif
{
private:
    int a,b;
public:
    asif(int x,int y)//getting parametric(parametric constructor)
    {
        a=x;b=y;
    }
    asif (int k)//using same function name while argument is differ.(constructor overloading)
    {
        a=k;
    }
    asif()//made to access other function(default constructor)
    {

    }
    display()
    {
        cout<<a<<b;
    }
    show()
    {
        cout<<"asif";
    }
};
main()
{
    asif c1(3,4),c4;
    c1.display();
    c1.show();
    c4.show();//different object is use to access it

}
