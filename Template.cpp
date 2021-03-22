#include<iostream>
using namespace std;
template <class T>
T Maximum(T a,T b,T c)
{
    T max=a;
    if(b>max)
      max=b;
    if(c>max)
      max=c;
    return max;
}
int main()
{   
    int i1,i2,i3;
    cout<<"Enter three integers  : ";
    cin>>i1>>i2>>i3;
    cout<<"The maximum of three integers is "<<Maximum(i1,i2,i3)<<endl;
    double d1,d2,d3;
    cout<<"Enter three floats  : ";
    cin>>d1>>d2>>d3;
    cout<<"The maximum of three floats is "<<Maximum(d1,d2,d3)<<endl;
    char ch1,ch2,ch3;
    cout<<"Enter three characters  : ";
    cin>>ch1>>ch2>>ch3;
    cout<<"The maximum of three characters is "<<Maximum(ch1,ch2,ch3)<<endl;
    string s1,s2,s3;
    cout<<"Enter three strings  : ";
    cin>>s1>>s2>>s3;
    cout<<"The maximum(alphabetically) of three strings is "<<Maximum(s1,s2,s3)<<endl;
    return 0;
}