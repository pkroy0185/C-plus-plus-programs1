#include<iostream>
using namespace std;

int main()
{
    char buf[11];
    cout<<"Using cin.get ....."<<endl;
    cin.get(buf,11);    
    cout << buf<<endl;
    cin.get(buf,11);
    cout<<buf<<endl;
    return 0;
}