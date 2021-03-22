#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int m=1008;
    cout<<"M ="<<setw(8)<<m<<endl;
    cout<<"M ="<<setw(8)<<left<<m<<endl;
    cout<<"M ="<<setw(20)<<right<<m<<endl;
    cout<<"M ="<<setw(20)<<left<<m<<endl;
    cout<<"M ="<<showpos<<m<<endl;
    cout<<"M ="<<noshowpos<<m<<endl;
    cout<<"M ="<<setw(20)<<internal<<m<<endl;
     return 0;
}