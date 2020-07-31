//passing object
#include<iostream>
using namespace std;
class ht
{
private:
    int a,b;
public:
    get(int x,int y)
    {
        a=x;
        b=y;
    }
    show()
    {
        cout<<a<<"\n"<<b;
    }
    ht add(ht c)
    {
        ht temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }

};
int main()
{
   ht c1,c2,c3;
   c1.get(3,4);
   c2.get(5,6);
   c3=c1.add(c2);
   c3.show();
}
