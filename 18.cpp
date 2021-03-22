/*Write program, which reads a number and finds the location of 
first even digit. If the number is 18263 then the output is 2 since 
the first even digit occurs at 2nd place.*/

#include<iostream>
using namespace std;
int FindFirstEven(int no)
{
    int remain,count=0,pos1=0;
    while(no>0)
    {
     remain=no%10;
     
     if(remain%2!=0)
       count++;
     else
     {
       count++;
       pos1=count;
     }
     no/=10;
    }
    if(pos1==0)
      return -1;
    else
      return ((++count)-pos1);
}
int main()
{
    int num,pos;
    cout << "Enter number : ";
    cin>>num;
    pos=FindFirstEven(num);
    if(pos==-1)
      cout<<"There is no even digit in given number..."<<endl;
    else
      cout<<"The position of first even digit is : "<<pos<<endl;
    return 0;
}