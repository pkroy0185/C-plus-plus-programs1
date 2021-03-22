#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter a number : ";
    cin>>no;
    while(!(cin>>no))
    {
     cin.clear();
     cin.ignore(999,'\n');
     cout<<"Invalid Input...Enter again..\n";
    }
    return 0;
}