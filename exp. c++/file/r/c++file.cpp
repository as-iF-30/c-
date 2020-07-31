#include<stdio.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
void add();
void display();
void edit();
void delet();
struct
{
    string bid,name;
}t;
int main()
{
    int n;
    cout<<endl<<"welcome"<<endl;
    cout<<"chooose ur option";
    cout<<"press 1 to add student"<<endl;
    cout<<"press 2 to display all"<<endl;
    cout<<"press 3 to edit data"<<endl;
    cout<<"press 4 to delete data"<<endl;
    cout<<"press 5 to clear screen"<<endl;
    cout<<"press o to exit"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 3:
            edit();
            break;
        case 4:
            delet();
            break;
        case 0:
            return 0;
            break;
        default:
            cout<<"enter between o-5"<<endl;
            break;
    }
    main();
    return 0;
}
void add()
{
    struct t;
    ofstream o1;
    o1.open("file.txt",ios::app);
    if(o1==NULL)
    {
        cout<<"no such file exist";
    }
    else
    {
    o1>>t.bid;
    o1>>t.name;
    o1.close();
    }
}
