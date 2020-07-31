#include<iostream>
using namespace std;
class Int
{
	public:
		int a;
		 Int(int a=0)
		{
			this->a=a;
		}
		Int operator+ (Int obj1)
		{
			Int obj2;
			obj2.a=a+obj1.a;
			return obj2;
		}
		void display()
		{
			cout<<"the value of a is:"<<a;
		}
};
int main()
{
	Int obj1(10), obj2(20);
	Int obj3=obj1+obj2;
	obj3.display();

}


