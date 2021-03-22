#include<iostream>
using namespace std;

int main()
{
    char buf[10];
    cout<<"Using cin with two parameters..."<<endl;
    cin.get(buf,11);   // not 10 
    cout << buf<<endl;
    return 0;
}