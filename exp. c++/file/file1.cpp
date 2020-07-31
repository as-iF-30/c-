// read from file
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    string c;
    ifstream o2;
    o2.open("file.txt",ios::app);
    /*while(!o2.eof())
    {
        c=o2.get(); //it will take space
        //fin>>ch;  //not take any delimeter.
        cout<<c;
    }*/
    /*while(o2.good())
    {
        getline(o2,c);   //take delimeter.
        cout<<c<<endl;
    }*/
    while(getline(o2,c))
    {
        cout<<c;   //not take delimeter
    }
    o2.close();
}

