//copy from one file to other.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    fstream o1,o2;
    o1.open("f1.txt",ios::in);
    o2.open("f2.txt",ios::app);
    if(!o1.is_open()&&!o2.is_open())
    {
        cout<<"ERROR";
    }
    else
    {
       while(!o1.eof())
       {
           o1.get(ch);
           o2<<ch;
       }
    }
    o1.close();
    o2.close();
}
