/*Write program, which reads a number and finds the location of last 
even digit. If the number is 18263 then the output is 4 since the last 
even digit 6 occurs at 4th place.*/

#include<iostream>
using namespace std;

int FindLastEven(int no)
{
    int remain,count=0,pos1=0;
    while(no>0)
    {
     remain=no%10;
     
     if(remain%2!=0)
       count++;
     else
     {
       if(pos1==0)
       {
         count++;
         pos1=count;
       }
       else
         count++;
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
    pos=FindLastEven(num);
    if(pos==-1)
      cout<<"There is no even digit in given number..."<<endl;
    else
      cout<<"The position of last even digit is : "<<pos<<endl;
    return 0;
}