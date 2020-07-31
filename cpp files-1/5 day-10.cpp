#include<iostream>
using namespace std;

class employee
{
	string name[10], address[10];
	int  year_of_joining[10],i, salary[10];
	
	public:
		employee()
		{
			for(i=0;i<3;i++)
			{
				cout<<endl<<"enter the name of employee: ";
			    cin>>name[i];
			    cout<<"enter the salary of employee: ";
			    cin>>salary[i];
			    cout<<"address of employee: ";
			    cin>>address[i];
			    cout<<"year of joining: ";
			    cin>>year_of_joining[i];
			}
		}
		void display()
		{
			cout<<endl<<endl<<endl<<endl<<">:>:>:>:>:>:>:>: the details are :<:<:<:<:<:<:<:<";
			cout<<endl<<endl<<"name\taddress\tsalary\tyear_of_joining"<<endl;
			
			for(i=0;i<3;i++)
			{
				cout<<""<<name[i]<<"\t"<<address[i]<<"\t"<<salary[i]<<"\t"<<year_of_joining[i]<<""<<endl;
			}
		}
};
main()
{
	employee e;
	e.display();
	
}
