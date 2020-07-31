#include<iostream>
using namespace std;
int main
{
	int n,k,i,t;
	cout<<"how many enteries u want to enter";
	cin>>n;
	int *a=new int[n];
	for(i=0;i<n;i++)
	{
		cin<<a[n];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>38)
		{
			cout<<a[i];
		}
		else
		{
			k=a[i]%5;
			if(k==3&&4)
			{
				t=5-k;
				cout<<a[i]+t;
			}
			else
			{
				cout<<a[i];
			}
		}
		
		
	}
	delete(a);
}
