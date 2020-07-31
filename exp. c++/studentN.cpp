#include<iostream>
using namespace std;
class student
{
public:
    string a[100],b[100];
    int c[100],i;
    set(int x)
    {
        for(i=1;i<=x;i++)
        {
            cout<<endl<<"enter the info of student"<<i<<":"<<endl;
            cout<<"enter the roll no:";
            cin>>c[i];
            cout<<"enter the name:";
            cin>>a[i];
            cout<<"enter the course:";
            cin>>b[i];
        }
    }
        show(int x)
        {
            cout<<endl<<"STUDENT INFO:";
            for(i=1;i<=x;i++)
            {
                cout<<"ROLL NO:"<<c[i]<<endl;
                cout<<"NAME:"<<a[i]<<endl;
                cout<<"COURSE:"<<b[i]<<endl;
            }
        }
};
int main()
{
    student o;
    int n;
    cout<<"enter the number of entries :";
    cin>>n;
    o.set(n);
    o.show(n);
}
