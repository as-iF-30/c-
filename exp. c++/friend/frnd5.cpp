#include<iostream>
using namespace std;
class frnd
{
private:
    int a,b;
public:
    friend ostream& operator<<(ostream&, frnd);
    friend istream& operator>>(istream&, frnd&);
};
ostream& operator<<(ostream &m,frnd c)
{
    cout<<c.a<<c.b;
    return(m);
}
istream& operator>>(istream &n, frnd &c)
{
    cin>>c.a>>c.b;
    return(n);
}
int main()
{
    frnd c1;
    cin>>c1;
    cout<<c1;//operator<<(cout,c1);
}
