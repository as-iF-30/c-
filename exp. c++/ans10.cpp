#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
    string name[10],roll_number[10];
    int i=0;
    ofstream o1;
    o1.open("student.txt",ios::out);
    if(!o1.is_open())
    {
        cout<<"ERROR IN OPENING";
    }
    else
    {
        for(i=1;i<=5;i++)
        {
            cout<<endl<<"enter data of student "<<i<<":"<<endl;
            cout<<"enter name:";
            cin>>name[i];
            cout<<"enter roll number:";
            cin>>roll_number[i];
        }
        for(i=1;i<=5;i++)
        {
            o1<<"Data Of Student"<<i<<":"<<endl;
            o1<<"NAME:"<<name[i]<<endl;
            o1<<"ROLL NUMMBER:"<<roll_number[i]<<endl;
        }
        o1.close();
        ifstream o2;
        o2.open("student.txt",ios::in);
        if(!o2.is_open())
    {
        cout<<"ERROR IN OPENING";
    }
    else
    {   system("cls");
        char ch;
        int j=0;
         while(!o2.eof())
        {
            ch=o2.get();//o2.get(ch);
            j++;
            cout<<ch;
        }
    }

    }



}
