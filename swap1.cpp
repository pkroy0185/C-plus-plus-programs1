#include<iostream>
using namespace std;
void swap(int ,int );
int main()
{
    int no1,no2;
    cout << "Enter two numbers to be swapped : ";
    cin>>no1>>no2;
    cout<<"Before swapping ...."<<endl;
    cout<<"no1= "<<no1<<"   no2= "<<no2<<endl;
    swap(no1,no2);
    cout<<"After swapping ...."<<endl;
    cout<<"no1= "<<no1<<"   no2= "<<no2<<endl;
    return 0;
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside swapping...."<<endl;
    cout<<"no1= "<<a<<"   no2= "<<b<<endl;
}