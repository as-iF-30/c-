//writing in file
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    //string n;
    char n[100];
    fstream o1;
    o1.open("f1.txt",ios::app);
    if(!o1.is_open())
    {
        cout<<"ERROR:file not created";
    }
    else
    {
        cout<<"enter something:";
        gets(&n[0]);
        o1<<n<<endl;
    }
    o1.close();
}
