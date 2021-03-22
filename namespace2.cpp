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
   {
    using namespace ns1;
    cout << "x  : "<<x<<endl;
    cout << "y  : "<<y<<endl;
   }
   {
    using namespace ns2;
    cout << "x    : "<<x<<endl;
    cout << "y    : "<<y<<endl;
    return 0;
   }
}