#include<iostream>
#include<cmath>
using namespace std;
void PowerOf2(int n)
{
    int i;
    for(i=0;i<=n;i++)
       cout<<"2^"<<i<<" = "<<pow(2,i)<<endl;
}
int main()
{
    int n;
    cout<<"Enter the value of power limit(last power of 2) :";
    cin>>n;
    PowerOf2(n);
    return 0;
}