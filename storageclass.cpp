#include<iostream>
using namespace std;
void Auto()
{
    int x=25;
    cout<<endl<<"Local x in Auto() is "<<x<<" after entering function Auto()."<<endl;
    x++;
    cout<<"Local x in Auto() is "<<x<<" before exiting function Auto()."<<endl;
}
void Static()
{
    static int x=50;
    cout<<endl<<"Static x in Static() is "<<x<<" after entering function Static()."<<endl;
    x++;
    cout<<"Static x in Static() is "<<x<<" before exiting function Static()."<<endl;
}
int x=1;
void Global()
{
    cout<<endl<<"Global x in Global() is "<<x<<" after entering function Global()."<<endl;
    x*=10;
    cout<<"Global x in Gloabl() is "<<x<<" before exiting function Global()."<<endl;
}
int main()
{
    Auto();
    Static();
    Global();
    Auto();
    Static();
    Global();
    return 0;
}