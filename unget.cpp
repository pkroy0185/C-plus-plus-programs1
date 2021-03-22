#include<iostream>
using namespace std;

int main()
{
    char ch1,ch2;
    cout<<"Get a character : ";
    cin.get(ch1);
    cout<<ch1<<endl;
    cout<<"Ungetting previous character .."<<endl;
    cin.unget();
    cout<<"Get another character.."<<endl;
    cin.get(ch2);
    cout<<ch2<<endl;
    return 0;
}