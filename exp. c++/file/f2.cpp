//reading in file
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    char ch,r[80];
    int i=0,j=0,k=0;
    fstream o1;
    o1.open("f1.txt",ios::in);
    if(!o1.is_open())
    {
        cout<<"ERROR:file not found";
    }
    else
    {
        while(!o1.eof())
        {
            ch=o1.get();//o1.get(ch);
            i++;
            cout<<ch;
            if(ch==32)
            {
            	k++;
			}
        }
        /*while(!o1.eof())
        {
            o1.getline(r,80);   //for counting line
            k++;
        }*/
        /*while(!o1.eof())
        {
            o1>>ch;     //for counting number of alphabets.
             j++;
        }*/
        cout<<endl<<"number of characters:"<<i;
        //cout<<endl<<"number of alphabet:"<<j;
        //cout<<endl<<"number of lines:"<<--k;
        cout<<"space"<<k;

    }
  o1.close();
}
