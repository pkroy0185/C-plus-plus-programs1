#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<<"Enter a number : ";
    cin>>no;
    if(cin.fail())
    {
        cout<<"Incorrect data type.."<<endl;
        cin.clear();
        cin.ignore(999,'\n');
    }
    return 0;
}