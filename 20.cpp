/*Write program, which reads a number x and a 
digit (integer) y and puts y as first digit in x. 
If x=2531 and y=8 then output is 82531.*/
#include<iostream>
#include<cmath>
using namespace std;

int InsertDigit(int no,int digit)
{
    int count=0,num,sign;
    num=no;
    if(no<0)
      sign=-1;
    else
      sign=1;
    if(no==0)
      return 10*digit;
    while(num!=0)
    {
     num/=10;
     count++;
    }
    num=pow(10,count);
    num=digit*num*sign;
    return (no+num);
}
int main()
{
    int num,newnum,digit;
    cout << "Enter number ( 000 is taken as 0 only ) : ";
    cin>>num;
    cout<<"Enter to the digit to insert : ";
    cin>>digit;
    newnum=InsertDigit(num,digit);
    cout<<"The modified number is "<<newnum<<endl;
    return 0;
}