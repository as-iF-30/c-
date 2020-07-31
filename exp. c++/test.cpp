#include<bits\stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;
	
};
node *head=NULL;
void add()
{
	node *temp=new node;
		cout<<"Enter the number"<<" ";
   	cin>>temp->data;
   	temp->next=NULL;
   if(head==NULL)
   {
   
   	head=temp;
   }
   else
   {
   	node *t2=new node;
   	struct node *t3;
	   t2=head;
	   while(t2!=NULL)
	   {
	   	t3=t2;
	   	t2=t2->next;
	   }
	   t3->next=temp;
   }
}
void print()
{
	node *t2=head;
	while(t2!=NULL)
	{
		cout<<t2->data;
		t2=t2->next;
	}
	
}
int main()
{
	int l;
	while( l==0)
	{
	cout<<"Enter 1 to add"<<endl;
	cout<<"Enter 2 to print"<<endl;
	cout<<"Enter 3 to exit"<<endl;
	int c;
	cin>>c;
	switch(c)
	{
	case 1:
	    add();
	    break;
	case 2:
	    print();
	    break;
    case 3:
	    l++;
	    break;
	default:
	cout<<"Enter under the range of 3";
    }
}
}
