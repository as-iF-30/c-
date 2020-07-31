#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"enter the number to be divided(a/b)"<<endl;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b";
	cin>>b;
	try
	{
		if(b==0)
			throw "divison error";
			c=a/b;
			cout<<c<<endl;
	}
	catch(const char *x)
	{
		cout<<"exception occured"<<endl<<x;
	}
}
