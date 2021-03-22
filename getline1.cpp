#include<iostream>
using namespace std;

int main()
{
    string buf;
    cout<<"Using getline with three parameters .."<<endl;
    getline(cin,buf,'#');
    cout << buf<<endl;
    return 0;
}