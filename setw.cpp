#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int m=1008,n=108,p=18;
    cout<<"M = "<<m<<endl;
    cout<<"N = "<<n<<endl;
    cout<<"P = "<<p<<endl;
    cout<<"M = "<<setw(8)<<m<<endl;
    cout<<"N = "<<setw(8)<<n<<endl;
    cout<<"P = "<<setw(8)<<p<<endl;
    return 0;
}