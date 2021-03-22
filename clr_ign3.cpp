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
      cout<<"Invalid Input.."<<endl;
      cin.clear();
      cin.ignore(999,'\n');
      continue;
     }
     cin.ignore(1000,'\n');
     if(cin.gcount()>1)
       continue;
     if(age<=0)
       continue;
     break;
    }
    cout<<"Age is "<<age<<endl;
    return 0;
}