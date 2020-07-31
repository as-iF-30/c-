//how to write in file with structure
#include<iostream>
#include<string.h>
#include<fstream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct
{
    string name,id;
}t;
int main()
{
    string ch;
    fstream o1;
    o1.open("file.txt",ios::app);
    //if(o1==NULL)
    if(!o1.is_open())
    {
        cout<<"not created";
    }
    else
    {
    cout<<"enter ur name";
    cin>>t.name;
    o1<<t.name;
    o1.close();
    }
}
