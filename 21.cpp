/*Write program, which reads a number and adds 1 to every digit. 
If input is 2314 then output is 3425. Assume that no digit is 9.*/
#include<iostream>
using namespace std;

int IncrementDigit(int no)
{
    int mult=1,remain,num=0, duplicate;
    duplicate=no;
    if(no==0)
      return 1;
    if(no<0)
      no=(-no);
    while(no>0)
    {
     remain=no%10;
     num=num+((++remain)*mult);
     no/=10;
     mult*=10;
    }
    if(duplicate<0)
       return -num;
    else
       return num;
}
int main()
{
    int num,newnum;
    cout << "Enter number ( 0065 is taken as 65 ) : ";
    cin>>num;
    newnum=IncrementDigit(num);
    cout<<"The modified number is "<<newnum<<endl;
    return 0;
}