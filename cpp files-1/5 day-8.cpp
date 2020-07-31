#include<iostream>
#include<math.h>
using namespace std;

class average
{
    int a,b,c,avg;
	
	public:
	    void putdata()
		{
			cout<<"enter the value of three nos: ";
			cout<<endl<<endl<<"a: ";
			cin>>a;
			cout<<endl<<"b: ";
			cin>>b;
			cout<<endl<<"c: ";
			cin>>c;
		}
		void getdata()
		{
			avg=(a+b+c)/3;
			
			cout<<"average of three no is: "<<avg;
		}
};

main()
{
	average a;
	a.putdata();
	a.getdata();
}
