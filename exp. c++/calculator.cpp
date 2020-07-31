#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char op;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter + for add"<<endl;
    cout<<"enter - for sub"<<endl;
    cout<<"enter * for multi"<<endl;
    cout<<"enter / for div"<<endl;
    cin>>op;
    cout<<"enter second number:";
    cin>>b;
    switch(op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    default:
        cout<<"no sign"<<endl;
        break;
    }
    cout<<"u want to continue"<<endl;
    cout<<"press y for yes"<<"\n"<<"press n for no"<<endl;
    char c;
    cin>>c;
    if(c=='y')
    {
        main();
    }
    else if(c=='n')
    {
        cout<<"thank u";
    }
    else
    {
        cout<<"wrong input";
    }
}



