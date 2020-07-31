#include<iostream>
using namespace std;
class employe
{  public:
    int salary,hours;
    getinfo(int a,int b)
    {
        salary=a;
        hours=b;
    }
    addsal()
    {
        if(salary<500)
        {
            salary=salary+10;
        }
    }
    addwork()
    {
        if(hours>6)
        {
            salary=salary+5;
        }
        cout<<"total salary:"<<salary<<endl;
    }
};
int main()
{
    employe o1;
    int s,h;											
    cout<<"enter salary of employee:";
    cin>>s;
    cout<<"enter working hours:";
    cin>>h;
    o1.getinfo(s,h);
    o1.addsal();
    o1.addwork();
}

