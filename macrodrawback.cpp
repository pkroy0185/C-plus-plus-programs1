#include<iostream>
using namespace std;
#define SQUARE(x) (x*x)
int main()
{
    int x,y,z,p;
    cout << "Enter x : ";
    cin>>x;
    y=x;
    z=SQUARE(++x);
    p=SQUARE(y++);
    cout<<"Z = "<<z<<"\nP="<<p<<endl;
    z=SQUARE(++x);
    p=SQUARE(y++);
    cout<<"Z = "<<z<<"\nP="<<p<<endl;
    return 0;
}