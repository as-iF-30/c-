#include<iostream>
#include<math.h>
using namespace std;

class triangle
{
	
	int ar,s,a,b,c,peri;
	
	public:
		void getdata()
		{
			cout<<"enter the side of triangle:";
			cout<<endl<<endl<<"a: ";
			cin>>a;
			cout<<"b: ";
			cin>>b;
			cout<<"c: ";
			cin>>c;
		}
		void area()
		{
			s=(a+b+c)/2;
			ar=sqrt(s*(s-a)*(s-b)*(s-c));
			
			cout<<endl<<endl<<"area of triangle is: "<<ar<<"";
		}
		void perimeter()
		{
			peri=a+b+c;
			
			cout<<endl<<"perimeter of triangle: "<<peri<<"";
		}
};
main()
{
	triangle t;
	t.getdata();
	t.perimeter();
	t.area();
}
