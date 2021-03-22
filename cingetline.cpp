#include<iostream>
using namespace std;

int main()
{
    char buf[11];
    cin.getline(buf,11);   
    cout<<cin.gcount()<<" characters were read...\n";
    cout << buf<<endl;
    cin.getline(buf,11);  
    cout<<buf<<endl;
    cout<<cin.gcount()<<" characters were read...\n";
    return 0;
}