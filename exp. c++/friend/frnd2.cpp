#include<iostream>
using namespace std;
class b;//formal declartaion of calss
class a
{
private :
    int x;
public:
    set(int q)
    {
        x=q;
    }
     friend frnd(a,b);
};
class b
{
private:
    int y;
public:
    set(int r)
    {
        y=r;
    }
      friend frnd(a, b);
};
frnd(a o1,b o2)
{
    cout<<o1.x+o2.y;
}
int main()
{
    a c1;
    b c2;
    c1.set(5);
    c2.set(4);
    frnd(c1,c2);

}

