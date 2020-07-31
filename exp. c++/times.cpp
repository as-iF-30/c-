#include<iostream>
using namespace std;
class time
{
    public:
    int h,s,m;
    set()
    {
        cout<<"enter time in sec:";
        cin>>s;
    }
    show()
    {
        h=s/3600;
        m=(s%3600)/60;
        s=(s%3600)%60;
        cout<<endl<<"time in hh:mm:ss format"<<endl<<h<<":"<<m<<":"<<s;
    }
};
int main()
{
    time o;
    o.set();
    o.show();
}
