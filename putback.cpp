#include<iostream>
using namespace std;

int main()
{
    char ch1,ch2;
    cout<<"Get a character : ";
    cin.get(ch1);
    cout<<"Putting back the previous character..."<<endl;
    cin.putback(ch1);
    cout<<"Get a character : \n";
    cin>>ch2;
    cout<<ch1<<"    "<<ch2<<endl;
    cout<<"Putting back 0 ..."<<endl;
    cin.putback('0');
    cout<<"character 2 is : "<<ch2<<endl;
    return 0;
}