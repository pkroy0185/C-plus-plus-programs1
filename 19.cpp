/*Write program, which reads a number and prints a number after 
deleting the first digit. If input is 2314 then output is 314. 
If input is 56 then output is 6.*/
#include<iostream>
#include<cmath>
using namespace std;

int DeleteFirstDigit(int no)
{
    int count=0,num;
    num=no;
    while(num>0)
    {
     num/=10;
     count++;
    }
    num=pow(10,--count);
    return (no%num);
}
int main()
{
    int num,newnum;
    cout << "Enter number (06536 is taken as 6536) : ";
    cin>>num;
    if(num<=0)
      {
       cout<<"Invalid input..."<<endl;
       return(-1);
      }
    else
    newnum=DeleteFirstDigit(num);
    cout<<"The modified number is "<<newnum<<endl;
    return 0;
}