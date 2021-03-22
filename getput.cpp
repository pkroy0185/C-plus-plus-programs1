#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter character : ";
    while(cin.get(ch))
    {
     if(isalpha(ch))
       cout.put(toupper(ch));
     cout<<endl;
    }
    return 0;
}