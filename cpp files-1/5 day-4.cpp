#include<iostream>
#include<math.h>
using namespace std;

class triangle
{
	int a,b,c,s,area,perimeter;
	
	public:
		triangle(int aa,int ab, int ac)
		{
			a=aa;
		    b=ab;
			c=ac;
			
			s=(a+b+c)/2;
			area=sqrt(s*(s-a)*(s-b)*(s-c));
			
			perimeter=a+b+c;
			cout<<"side of triangle are: ";
			cout<<endl<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c;
			
			cout<<endl<<endl<<"area of triangle is: "<<area<<"";
			cout<<endl<<"perimeter of triangle: "<<perimeter<<"";
		}
};
main()
{
	triangle q(3,4,5);
}
