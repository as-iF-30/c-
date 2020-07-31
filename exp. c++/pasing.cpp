#include<iostream>
using namespace std;
class yo
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
        cout<<a<<b;
    }
};
main()
{
    yo b;
    b.get(3,2);
    b.show();
}
