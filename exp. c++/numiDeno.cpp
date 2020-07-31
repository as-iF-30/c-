#include<iostream>
using namespace std;
class A
{
private:
    int a,b,c;
public:
    friend &operator<<(ostream &,A &l);
    friend &operator>>(istream &,A &l) ;
    operator +(A x);
    operator -(A x);
    operator *(A x);
    operator /(A x);
};
&operator>>(istream &,A &l)
{
    cout<<"1st numerator:";
    cin>>l.a;
    cout<<"1st denominator:";
    cin>>l.b;
}
&operator<<(ostream &,A &l)
{
    cout<<l.a<<"/"<<l.b;
}
A::operator+(A x)
{
    x.a=a*x.b+x.a*b;
    x.b=b*x.b;
    cout<<x.a<<"/"<<x.b;
}
A::operator-(A x)
{
    x.a=a*x.b-x.a*b;
    x.b=b*x.b;
    cout<<x.a<<"/"<<x.b;
}
A::operator*(A x)
{
    x.a=a*x.a;
    x.b=b*x.b;
    cout<<x.a<<"/"<<x.b;
}
A::operator/(A x)
{   x.c=a*x.b;
    x.b=b*x.a;
    cout<<x.c<<"/"<<x.b;
}
int main()
{
    A f,g,h;
    int n;
    cout<<"enter 1st entry"<<endl;
    cin>>f;
    cout<<endl<<"enter 2nd entry"<<endl;
    cin>>g;
    cout<<endl<<"1st FRACTION:"<<endl;
    cout<<f;
    cout<<endl<<"2nd FRACTION:"<<endl;
    cout<<g;
    cout<<endl<<"press 1 for fraction addition"<<endl;
    cout<<"press 2 for fraction subtraction "<<endl;
    cout<<"press 3 for fraction multipication"<<endl;
    cout<<"press 4 for fraction divison"<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
       cout<<"addition"<<endl;
        f+g;
        break;
    case 2:
        cout<<"subtraction"<<endl;
        f-g;
        break;
    case 3:
        cout<<"multipication"<<endl;
        f*g;
        break;
    case 4:
        cout<<"divison"<<endl;
        f/g;
        break;
    default:
        cout<<"enter between 1-4"<<endl;
        break;
    }
}
