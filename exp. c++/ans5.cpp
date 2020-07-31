#include<iostream>
using namespace std;
class Time
{
	public:
		int h,m,s;
		Time()
		{
			h=0;
			m=0;
			s=0;
		}
		Time(int ho,int mo,int so)
		{
			h=ho;
			m=mo;
			s=so;
		}
		Time operator + (Time p)
		{
			// let s0 be 4132
			int h0,m0,s0;
			s0=p.s+s+(p.m*60)+(m*60)+(p.h*3600)+(h*3600);
			h0=s0/3600;  // h0=1a
			s0=s0%3600;  // m0=532
			m0=s0/60;    // m0=8
			if(m0>59)
			{
				abc:
				h0+=1;
				m0=m0-60;
				if(m0>59)
					goto abc;
			}
			s0=s0%60;    // s0=52
			p.h=h0;
			p.m=m0;
			p.s=s0;
			return p;
		}
		void display()
		{
			cout<<endl<<"Time t3 is -> "<<h<<":"<<m<<":"<<s;
		}
};
int main()
{
	int h1,h2,m1,m2,s1,s2;
	char ch;
	cout<<"Practical Q5.i"<<endl<<"Enter Time in format HH:MM:SS for t1 : ";
	cin>>h1>>ch>>m1>>ch>>s1;
	cout<<"Enter Time in format HH:MM:SS for t2 : ";
	cin>>h2>>ch>>m2>>ch>>s2;
	Time t1(h1,m1,s1),t2(h2,m2,s2),t3;
	t3=t1+t2;
	t3.display();
}
