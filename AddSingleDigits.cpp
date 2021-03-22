#include<iostream>
using namespace std;

int main()
{
    int count=0,sum=0;
    char ch;
    cout<<"This program takes a string and adds all the single digit numbers and prints sum on the screen..."<<endl;
    cout<<"Enter the string :"<<endl;
    cin.get(ch);
    while(ch!='\n')
    {
     if(isdigit(ch))
       {
        sum=sum+(static_cast<int>(ch)-48);
        count++;
       }
     cout<<ch;
     cin.get(ch);
    }
    cout<<ch;
    if(count==2)
      cout<<"m+n = "<<sum<<endl;
    else
      cout<<"Sum = "<<sum<<endl;
    return 0;
}