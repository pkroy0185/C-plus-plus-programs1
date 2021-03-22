#include<iostream>
using namespace std;

int main()
{
    int age;
    
    while(1)
    {
     cout<<"Enter age : ";
     cin>>age;
     if(cin.fail())
     {
      cout<<"Input invalid..."<<endl;
      cin.clear();
      cin.ignore(999,'\n');
      continue;
     }
     cin.ignore(1000,'\n');
     if(age<=0)
       continue;
     break;
    }
    cout<<"Age is "<<age<<endl;
    return 0;
}