#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char line[40]; 
    cout<<"Enter a line :\n";
    cin.getline(line,40);
    cout<<line<<endl;
    cout<<"Length of string : "<<strlen(line)<<endl;
    cout<<"Enter text :\n";
    cin.getline(line,50,'#');
    cout<<line<<endl;
    return 0;
}