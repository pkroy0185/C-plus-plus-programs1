#include<iostream>
using namespace std;
int   max(int ,int );
int   max(int ,int ,int );
float max(float ,float );
float max(float ,float ,float );
int main()
{
    float a=5.5,b=10.10,c=15.15;
    cout<<max(5,10)<<endl;
    cout<<max(5,10,15)<<endl;
    cout<<max(5.5,10.10)<<endl;
    cout<<max(a,b,c)<<endl;
    return 0;
}
int max(int a,int b)
{
    return (a>b)?a:b;
}
float max(float a,float b)
{
    return (a>b)?a:b;
}
int max(int a,int b,int c)
{
    return (a>b?(a>c?a:c):(b>c?b:c));
}
float max(float a,float b,float c)
{
    return (a>b?(a>c?a:c):(b>c?b:c));
}