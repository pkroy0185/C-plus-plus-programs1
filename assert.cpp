#include<iostream>
#include<cassert>
using namespace std;

int main()
{
    int x=0,y=5;
    for(x;x<10;x++)
       {
        cout <<"X = "<<x<<"Y = "<<y<<endl;
        assert(x<y);
       }
    return 0;
}