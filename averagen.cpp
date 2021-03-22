#include<iostream>
using namespace std;

int main()
{
    int no,sum=0,i;
    float average;
    cout << "This program finds average of numbers u enter...\n";
    cout<<"Enter numbers and enter any char to terminate input flow : "<<endl;
    for(i=0;cin>>no;sum+=no,i++);
    average=(float)sum/i;
    cout<<"Average of all numbers is : "<<average<<endl;
    return 0;
}