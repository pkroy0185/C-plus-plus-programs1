/*Write program, which reads a float number and 
an integer k and prints number by adding 1 to the 
first k digits. If input is 0.241573 and k is 4 then 
output is 0.352673. Assume that given number is between 0 and 1.*/
#include<iostream>
#include<cmath>
using namespace std;
float AddTillKth(float no,int k)
{
    int count=1;
    float duplicate;
    duplicate=no;
    if(no<0)
      no=(-no);
    while(count<=k)
    {
      no=no*10;
      no=no+1;
      count++;
    }
    no=no/pow(10,k);
    if(duplicate<0)
      return -no;
    else
      return no;
}
int main()
{
    float num,no;
    int k;
    cout << "Enter number (between 0 and 1) : ";
    cin>>num;
    cout<<"Enter the value of k : ";
    cin>>k;
    if(num>1 || num<0)
    {
      cout<<"Invalid input..."<<endl;
      return -1;
    }
    no=AddTillKth(num,k);
    cout<<"The modified number is : "<<no<<endl;
    return 0;
}