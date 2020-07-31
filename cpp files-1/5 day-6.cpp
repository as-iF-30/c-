#include<iostream>
#include<math.h>
using namespace std;

class area
{
	int a,b,area1;
	
	public:
		setdim()
		{
			cout<<"side of 1st rectangle are: ";
			cout<<endl<<endl<<"a: ";
			cin>>a;
			cout<<endl<<"b: ";
			cin>>b;
		}
		void getdim()
		{
			area1=a*b;
			
			cout<<endl<<endl<<"area of 1st rectangle is: "<<area1<<"";
		}
};
main()
{
	area q;
    q.setdim();
    q.getdim();
}
