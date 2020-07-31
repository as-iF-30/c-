#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
int main();
using namespace std;
static int k=0;
class publication
{
public:
    string title[100];
    float price[100];
    getdata(int l)
    {
        int i=1;
        while(i<2)
        {
        cout<<l<<".";
        cout<<"enter title:";
        cin>>title[l];
        cout<<"enter price:";
        cin>>price[l];
        i++;
        }
    }
    showdata(int l)
    {
        int j=1;
        cout<<"title"<<"\t"<<"price"<<endl;
       for(j=1;j<=l;j++)
       {
        cout<<" "<<title[j]<<"\t\t"<<price[j]<<endl;
       }
    }
};
class book:public publication
{
public:
    int count[100],p;
    int getdata(int l)
    {
         int n=1;
        while(n<2)
        {
            cout<<"enter number of pages:";
            cin>>count[l];
            n++;
        }


    }
    showdata(int l)
    {
        int i=1;
        cout<<"total number of pages:";
        for(i=1;i<=l;i++)
        {
            p=p+count[i];
        }
        cout<<p<<endl;

    }
};
class tape:public publication
{
public:
    float min[100],t;
    getdata(int l)
    {
        int m=1;
        while(m<2)
        {
          cout<<"enter time in minute:";
          cin>>min[l];
          m++;
        }
         cout<<"do u want to continue"<<endl;
        cout<<"press y for yes"<<endl<<"press n for no";
        char c;
        cin>>c;
        if(c=='y')
        {
            main();
        }
        else if(c=='n')
        {
            cout<<"****thank u***"<<endl;
        }

    }
    showdata(int l)
    {
        float p;
        int i=1;
        cout<<"total time:";
        for(i=1;i<=l;i++)
        {
            p=p+min[i];
        }
        cout<<p<<endl;
    }


};
int main()
{
    int n;
    static publication o1;
    static book o2;
    static tape o3;
        k++;
        o1.getdata(k);
        o2.getdata(k);
        o3.getdata(k);
        cout<<"total number of enteries:"<<k<<endl;
        o1.showdata(k);
        o2.showdata(k);
        o3.showdata(k);


}
