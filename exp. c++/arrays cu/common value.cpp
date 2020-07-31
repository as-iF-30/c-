//ENTER 2 ARRAYS OF 5-5 ELEMENTS EACH AND DISPLAY COMMON VALUE AT ANY POINT
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int a[10],b[10],c,d,e=0,j;
    cout<<"enter the total number u want to put in a:";
    cin>>c;
    int i;
    for(i=1;i<=c;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the total number u want to put in b:";
    cin>>d;
    for(j=1;j<=d;j++)
    {
        cin>>b[j];
    }
    cout<<"elements which are common:"<<endl;
    for(i=1;i<=c;i++)
    {
        for(j=1;j<=d;j++)
        {
           if(a[i]==b[j])
           {
            cout<<a[i]<<endl;
            e++;
          }
       }
    }
    cout<<"total numbers of elements which are common:"<<e;
    getch();

}
