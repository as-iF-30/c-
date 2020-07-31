//Write a program in C++ to find the roots of and quadratic equation of type ax2+bx+c where a is not equal to zero.
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,r1,r2,re,imp;
	cout<<"put ur number for quadratic equation(ax2+bx+c):"<<endl;
	cout<<"a:";
	cin>>a;
	cout<<"b:";
	cin>>b;
	cout<<"c:";
	cin>>c;
	if(a!=0)
	{
	   d=b*b-4*a*c;
	   if(d==0)
	   {
	   	cout<<"roots r real and equal"<<endl;
	   	r1=-b/(2*a);
	   	r2=r1;
	   	cout<<"roots are:"<<endl<<"r1="<<r1<<endl<<"r2="<<r2;
	   }
	   else if(d>0)
		{
			cout<<"roots r real n unequal"<<endl;
			r1=(-b+sqrt(d))/(2*a);
			r2=(-b-sqrt(d))/(2*a);
			cout<<"roots are:"<<endl<<"r1="<<r1<<endl<<"r2="<<r2;
		}
		else if(d<0)
		{
			cout<<"roots r complex"<<endl;
			d=-d;
			re=-b/(2*a);
			imp=sqrt(d)/(2*a);
			cout<<"roots r:"<<endl<<"r1="<<re<<"+i"<<imp<<endl<<"r2="<<re<<"-i"<<imp<<endl;
		}
	}
	else if(a==0)
	{
		cout<<"a can not be zero";
	}
}
