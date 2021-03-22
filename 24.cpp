/*A company wants to transmit data over the telephone, but they are concerned that their 
phones may be tapped. All of their data are transmitted as four-digit integers. Write a 
program that encrypts their data so that it can be transmitted more securely. Your program 
should read a four-digit integer and encrypt it as follows: Replace each digit by (the sum of that digit plus 7) modulus 10. 
Then, swap the first digit with the third, swap the second digit with the fourth and print the encrypted integer.
[Example input is 1009, output is 7687]*/

#include<iostream>
#include<cmath>
using namespace std;
int Encryption(int no)
{
    int remain,num=0,count=1;
    while(no>0)
    {
      remain=no%10;
      if(count==1)
        num=num+((remain+7)%10)*pow(10,2);
      else
       if(count==2)
         num=num+((remain+7)%10)*pow(10,3);
       else
        if(count==3)
          num=num+((remain+7)%10)*pow(10,0);
        else
         if(count==4)
           num=num+((remain+7)%10)*pow(10,1);
      count++;
      no/=10;
    }
    while(count<5)
    {
      if(count==1)
        num=num+7*pow(10,2);
      else
       if(count==2)
         num=num+7*pow(10,3);
       else
        if(count==3)
          num=num+7*pow(10,0);
        else
         if(count==4)
           num=num+7*pow(10,1);
      count++;
    }
    return num;
}
int main()
{
    int no,encrypted;
    cout<<"The code should be non negative 4 digit integer.\nIf number is given as 56 then number is considered to be 0056 by default.\n";
    cout<<"Enter the 4 digit code : ";
    cin>>no;
    if(no<0 || ((no/10000)>0))
      {
       cout<<"Invalid Input...\n";
       return -1;
      }
    else
      encrypted=Encryption(no);
    if(encrypted<10)
      cout<<"Encrypted code is : 000"<<encrypted<<endl;
    else
     if(encrypted<100)
      cout<<"Encrypted code is : 00"<<encrypted<<endl;
     else
      if(encrypted<1000)
        cout<<"Encrypted code is : 0"<<encrypted<<endl;
      else
        cout<<"Encrypted code is : "<<encrypted<<endl;
    return 0;
}