#include<iostream>
using namespace std;
class time
{
public:
int    h,m,s;
    set()
    {
        cout<<"enter time in hh:mm:ss format:";
        cin>>h>>m>>s;
    }
    show()
    {
        s=s+(m*60)+(h*3600);
        cout<<endl<<"time in sec:"<<s;
    }
};
int main()
{
    time o;
    o.set();
    o.show();
}
