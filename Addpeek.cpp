#include<iostream>
using namespace std;

int main()
{
    int m,n;
    char ch;
    cout<<"Enter string :\n";
    while(ch=cin.peek())
    {
     if(isdigit(ch))
     {
      cin>>m;
      break;
     }
     else
      cin.get(ch);
    }
    while(ch=cin.peek())
    {
     if(isdigit(ch))
     {
      cin>>n;
      break;
     }
     else
      cin.get(ch);
    }
    cout<<"m+n = "<<m+n;
    return 0;
}