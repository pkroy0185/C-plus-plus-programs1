#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char buf[10];
    cout<<"Enter string : ";
    cin>>setw(6)>>buf;
    cout<<buf<<endl;
    cin>>buf;
    cout<<buf<<endl;
    return 0;
}