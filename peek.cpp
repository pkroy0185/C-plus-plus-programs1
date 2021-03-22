#include<iostream>
using namespace std;

int main()
{
    char ch1,ch2;
    cout<<"Enter 1st character : \n";
    ch1=cin.peek();
    cout<<"Enter 2nd character : \n";
    cin>>ch2;
    cout<<"Peeked : "<<ch1<<"\nGot : "<<ch2<<endl;
    return 0;
}