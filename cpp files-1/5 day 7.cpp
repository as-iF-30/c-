#include<iostream>
#include<math.h>
using namespace std;

class area
{
	int a,b,area1;
	
	public:
		area()
		{
			cout<<"side of rectangle are: ";
			cout<<endl<<endl<<"length: ";
			cin>>a;
			cout<<endl<<"breadth: ";
			cin>>b;
		}
		int return_area()
		{
			area1=a*b;
			
			cout<<endl<<endl<<"area of rectangle is: "<<area1<<"";
			
			return area1;
		}
};
main()
{
	area a;
	a.return_area();
}
