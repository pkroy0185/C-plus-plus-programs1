#include<iostream>
using namespace std;
void Static()
{
 static int i,j=0;
 cout<<i<<"       "<<j<<endl;;
 i++;
 j++;
}

int main()
{
    cout<<"i       j"<<endl;
    Static();
    Static();
    Static();
    Static();
    Static();
    Static();
    return 0;
}