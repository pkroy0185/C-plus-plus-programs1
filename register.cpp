#include<iostream>
using namespace std;

int main()
{
    register int count=0,i;// lifetime of count is till end of main
    //register storage is used when we need a specific variable to work with frequently
    for(i=0;i<100;i++,count++);
    cout<<count<<endl;
    return 0;
}