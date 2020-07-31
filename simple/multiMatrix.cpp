#include<iostream>
using namespace std;
int main()
{
    int i,j,a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,sum=0;
     cout<<"Enter rows and column for first matrix:"<<endl;
     cin>>r1>>c1;
     cout<<"Enter rows and column for second matrix:"<<endl;
     cin>>r2>>c2;
     if(c1!=r2)
     {
         cout<<"system will not execute";
     }
     else
     {
         cout<<"enter the first matrix"<<endl;
         for(i=0;i<r1;i++)
         {
             for(j=0;j<c1;j++)
             {
                 cin>>a[i][j];
             }
             cout<<endl;
         }
         cout<<"enter the second matrix"<<endl;
         for(i=0;i<r2;i++)
         {
             for(j=0;j<c2;j++)
             {
                 cin>>b[i][j];
             }
             cout<<endl;
         }
         cout<<"the first matrix is:"<<endl;
         for(i=0;i<r1;i++)
         {
             for(j=0;j<c1;j++)
             {
                 cout<<"\t" <<a[i][j];
             }

             cout<<endl;
         }
         cout<<"the second matrix is:"<<endl;
         for(i=0;i<r2;i++)
         {
             for(j=0;j<c2;j++)
             {
                 cout<<"\t"<<b[i][j];
             }

             cout<<endl;
         }
         int k;
         for(i=0;i<r1;i++)
         {
             for(j=0;j<c2;j++)
             {
                 sum=0;
                 for(k=0;k<2;k++)
                 {
                     sum=sum+a[i][k]*b[k][j];
                 }
                 c[i][j]=sum;
             }
         }
         cout<<"multipication of two arrays is:"<<endl;
         for(i=0;i<r1;i++)
         {
             for(j=0;j<c2;j++)
             {
                 cout<<"\t" << c[i][j] ;
             }
             cout<<endl;
         }
     }

}
