#include<iostream>
using namespace std;

int main()
{
    int no1,no2,no3,largest;
    cout << "Enter 3 numbers :\n";
    cin>>no1>>no2>>no3;
    if((no1==no2)&&(no1==no3))
      cout<<"All 3 numbers are equal.\n";
    else
      cout<<"Largest number is "<<(no1>no2?(no1>no3?no1:no3):(no2>no3?no2:no3))<<".\n";
    cout << "Enter 3 distinct numbers a,b and c:\n";
    cin>>no1>>no2>>no3;
    if((no1==no2)||(no1==no3)||(no2==no3))
       cout<<"Wrong input...\n";
    else
       cout<<(no1>no2?(no1>no3?"a is larger than b & c.\n":"c is larger than a & b.\n"):(no2>no3?"b is larger than a & c.\n":"c is larger than a & b.\n"));
    cout<<"Enter number of Mango : ";
    cin>>no1;
    cout<<"Enter number of Apple : ";
    cin>>no2;
    if((no1>=0)&&(no2>=0))
      cout<<" There are "<<(no1+no2)<<" fruits in total.\n";
    else
      cout<<"Sorry Wrong input...\n";
    return 0;
}