#include<iostream>
using namespace std;

class student
{
	string name1,name2,address1,address2;
	int roll_no1,roll_no2;
	
	public:
		student1()
		{
			name1="john";
			roll_no1=1;
			address1="chandigarh";
			
			cout<<"student name: "<<name1<<""<<endl<<"roll no: "<<roll_no1<<""<<endl<<"address: "<<address1<<"";
		}
		student2()
		{
			name2="sam";
			roll_no2=2;
			address2="punjab";
			
			cout<<endl<<endl<<"student name: "<<name2<<""<<endl<<"roll no: "<<roll_no2<<""<<endl<<"address: "<<address2<<"";
		}
};
main()
{
	student s1,s2;
	s1.student1();
	s2.student2();
}
