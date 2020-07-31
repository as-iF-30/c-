#include<iostream>
using namespace std;
class Student
{
    int a,b;
public:
    Student(int i,int j)
    {
        a=i;
        b=j;
       // cout<<"a="<<a<<endl<<"b="<<b;
    }
    void display()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};
main()
{
    Student o(4,5);
    o.display();
}
