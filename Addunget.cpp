#include<iostream>
using namespace std;

int main()
{
    int sum=0,m,count=0;
    char ch;
    cout<<"Enter string :\n";
    while(cin.get(ch)&&count<3)
    {
     if(!isdigit(ch))
       continue;
     else
     {
      cin.unget();
      cin>>m;
      sum=sum+m;
      count++;
     }
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}