#include<iostream>
using namespace std;
class time
{
public:
     int h1,h2,m1,m2,s1,s2,h,s,m;
    set()
    {
    cout<<"enter time in hh:min:sec:"<<endl;
    cout<<"enter time 1:";
    cin>>h1>>m1>>s1;
    cout<<"enter time 2:";
    cin>>h2>>m2>>s2;
    }
    sum()
    {
        s=s1+s2;
        if(s<=59)
        {
            m=m1+m2;
            if(m<=59)
               {
                 h=h1+h2;
                    cout<<"Time is"<<h<<":"<<m<<":"<<s;
               }
            else
            {
                h=h1+h2+(m1+m2)/60;
                m=(m1+m2)%60;
                cout<<"Time is"<<h<<":"<<m<<":"<<s;
            }
        }
        else
        {
         m=m1+m2+s/60;
         s=s%60;
         if(m<=59)
         {
             h=h1+h2;
             cout<<"Time is"<<h<<":"<<m<<":"<<s;
         }
         else
         {
             h=h1+h2+m/60;
             m=m%60;
             cout<<"Time is"<<h<<":"<<m<<":"<<s;
         }
        }
    }

};
int main()
{
    time t;
    t.set();
    t.sum();
}
