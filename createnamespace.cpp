#include<iostream>
using namespace std;
namespace ns1
{
    const double pi=3.14;
    int val()
    {
     return 5;
    }
}
namespace ns2
{
    const double pi=3.1416;
    double val()
    {
     return 2*pi;
    }
}
int main()
{
    cout << "ns1::val()  : "<<ns1::val()<<endl;
    cout << "ns2::val()  : "<<ns2::val()<<endl;
    cout << "ns1::pi     : "<<ns1::pi<<endl;
    cout << "ns2::pi     : "<<ns2::pi<<endl;
    return 0;
}