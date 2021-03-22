#include<iostream>
using namespace std;

int main()
{
    char line[20]; 
    cout<<"Enter a line :\n";
    cin.read(line,20);
    cout.write(line,cin.gcount());
    cout<<endl;
    cout<<cin.gcount()<<" characters were read...\n";
    return 0;
}