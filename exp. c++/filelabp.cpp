#include<iostream>
using namespace std;
class op
{
    public:
    operator=(op &o2)
    {
        cout<<"hi";
    }
};
int main()
{
    op o1,o3;
    o1=o3;
}

