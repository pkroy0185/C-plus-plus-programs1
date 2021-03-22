#include<iostream>
using namespace std;
namespace ns1
{
    int x=5;
    int y=10;
}
namespace ns2
{
    double x=3.1416;
    double y=2.7183;
}
int main()
{
    using ns1::x;
    using ns2::y;
    cout << "x  : "<<x<<endl;
    cout << "y  : "<<y<<endl;
    cout << "ns1::y     : "<<ns1::y<<endl;
    cout << "ns2::x     : "<<ns2::x<<endl;
    return 0;
}