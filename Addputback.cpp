#include<iostream>
using namespace std;

int main()
{
    int m,n;
    char ch;
    cout<<"Enter string :\n";
    while(cin.get(ch))
    {
     if(isdigit(ch))
     {
      cin.putback(ch);
      cin>>m;
      break;
     }
    }
    while(cin.get(ch))
    {
     if(isdigit(ch))
     {
      cin.putback(ch);
      cin>>n;
      break;
     }
    }
    cout<<"m+n = "<<m+n;
    return 0;
}