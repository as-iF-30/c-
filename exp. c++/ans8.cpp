#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <float> p;
	int t;
	float tmp;
	cout<<"Enter how many number you want to give: ";
	cin>>t;
	cout<<"Give numbers : ";
	for(int j=0;j<t;j++)
	{
		cout<<endl<<"Number "<<j+1<<" : ";
		cin>>tmp;
		p.push_back(tmp);
	}
	float *u = new float;
	u=&p[0];
	float avg=0;
	for(float* i=u;i<(u+p.size());i++)
	{
		avg=avg+(*i);
	}
	delete u;
	avg=avg/t;
	cout<<endl<<"Average of the given numbers is "<<avg;
}
