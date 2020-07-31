#include<iostream>
using namespace std;
class fraction
{
private:
    int a,b;
public:
    set(int x, int y)
    {
        a=x;
        b=y;
    }
    friend &operator<<(ostream &, fraction &o);
    friend &operator>>(istream &, fraction &o);
};
&operator >>(istream&,fraction &o)
{
   cin>>o.a;
   cin>>o.b;

}
&operator<<(ostream &, fraction &o)
{
    fraction t;
    t.a=a+o.a;
    t.b=b+o.b;
    cout<<a<<b;
}
int main()
{
    fraction o1,o2;
    cin>>o1;
    cin>>o2;
}
