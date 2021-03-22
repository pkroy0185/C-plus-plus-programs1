#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter a number : ";
    cin>>no;
    if(cin.fail())
      cout<<"Incorrect data type.\n";
    return 0;
}