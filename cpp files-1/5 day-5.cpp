#include<iostream>
#include<math.h>
using namespace std;

class rectangle
{
	int a,b,c,d,area1,area2;
	
	public:
		rectangle(int aa,int ab, int ac,int ad)
		{
			a=aa;
		    b=ab;
			c=ac;
			d=ad;
			
			cout<<"side of 1st rectangle are: ";
			cout<<endl<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl;
			
			cout<<endl<<"side of 2nd rectangle are: ";
			cout<<endl<<endl<<"c: "<<c<<endl<<"d: "<<d<<endl;
			
			
		}
		void area()
		{
			area1=a*b;
			area2=c*d;
			
			cout<<endl<<endl<<"area of 1st rectangle is: "<<area1<<"";
			cout<<endl<<endl<<"area of 2nd rectangle is: "<<area2<<"";
		}
};
main()
{
	rectangle q(4,5,5,8);
    q.area();
}
