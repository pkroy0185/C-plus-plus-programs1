#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Use of cin.get()....\n";
    cout<<"Enter character : ";
    while(cin.get(ch))
         cout << ch<<endl;
    return 0;
}