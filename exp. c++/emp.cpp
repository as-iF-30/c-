#include<iostream>
#include<conio.h>
using namespace std;
static int k=1;
class emp
{
public:
    string n[100];
    int no[100],j;
    set(int l)
    {
        int i=1;
        while(i<2)
        {
            cout<<l<<".";
            cout<<"enter employe name:";
            cin>>n[l];
            cout<<"enter the number:";
            cin>>no[l];
            i++;
        }
    }
    show(int l)
    {
        cout<<"total entries:"<<l;
        cout<<endl<<"employe name"<<"\t"<<"number"<<endl;
        for(j=1;j<=l;j++)
        {
            cout<<" "<<n[j]<<"\t\t"<<no[j]<<endl;
        }
    }
};
int main(int k)
{
    char c;
    static emp o;
    o.set(k);
    cout<<"do u want to continue"<<endl;
    cout<<"press y for yes"<<endl<<"press n for no"<<endl;
    cin>>c;
    if(c=='y')
    {
      k=k+1;
      main(k);
    }
    else if(c=='n')
    {
       o.show(k);
    }
}
