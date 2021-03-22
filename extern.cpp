#include<iostream>
using namespace std;
int global1=10;
int main()
{
    int global1=5;
    extern int global2;//declaration of global2
    cout << "global1(local)  = "<<global1<<endl;
    cout << "global1(global) = "<<::global1<<endl;
    cout << "global2         = "<<global2<<endl;
    return 0;
}
int global2=20;//defining global2