#include<iostream>
using namespace std;
class A
{
public:
    f1(){cout<<"hi"<<endl;}
    virtual f2(){cout<<"how"<<endl;}
    virtual f3(){cout<<"r"<<endl;}
    virtual f4(){cout<<"u"<<endl;}
} ;
class B
{
public:
    f1(){cout<<"i"<<endl;}
    f1(){cout<<"i"<<endl;}
    f1(){cout<<"m"<<endl;}
    f1(){cout<<"fine"<<endl;}
};
//*vptr is one time and it run for that class whose object is made.
//*vptr contain adress of v-tabel of that class whose object is runing.
main()
{

}
