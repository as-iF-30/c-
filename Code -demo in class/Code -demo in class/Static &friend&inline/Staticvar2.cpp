#include<iostream>
using namespace std;
class Student
{
public:
    static int count=1;
    void display()
    {

        cout<<count<<endl;
    }


};
int Student::count=0;
main()
{
    cout<<Student::count<<endl;
    Student o;
    o.display();
}
