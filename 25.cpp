/*Write a program that inputs an encrypted four-digit 
integer (as per question no 24) and decrypts it to form the original number.
 [ Example input is 7687, output is 1009]*/

#include<iostream>
#include<cmath>
using namespace std;

int Decryption(int no)
{
    int remain,num=0,count=1;
    while(no>0)
    {
      remain=no%10;
      if(remain<7)
        remain=remain+10;
      if(count==1)
        num=num+(remain-7)*pow(10,2);
      else
       if(count==2)
         num=num+((remain-7)%10)*pow(10,3);
       else
        if(count==3)
          num=num+((remain-7)%10)*pow(10,0);
        else
         if(count==4)
           num=num+((remain-7)%10)*pow(10,1);
      count++;
      no/=10;
    }
    while(count<5)
    {
      if(count==1)
        num=num+3*pow(10,2);
      else
       if(count==2)
         num=num+3*pow(10,3);
       else
        if(count==3)
          num=num+3*pow(10,0);
        else
         if(count==4)
           num=num+3*pow(10,1);
      count++;
    }
    return num;
}
int main()
{
    int no,decrypted;
    cout<<"The code should be non negative 4 digit integer.\nIf number is given as 56 then number is considered to be 0056 by default.\n";
    cout<<"Enter the 4 digit code : ";
    cin>>no;
    if(no<0 || ((no/10000)>0))
      {
       cout<<"Invalid Input...\n";
       return -1;
      }
    else
      decrypted=Decryption(no);
    if(decrypted<10)
      cout<<"Decrypted code is : 000"<<decrypted<<endl;
    else
     if(decrypted<100)
      cout<<"Decrypted code is : 00"<<decrypted<<endl;
     else
      if(decrypted<1000)
        cout<<"Decrypted code is : 0"<<decrypted<<endl;
      else
        cout<<"Decrypted code is : "<<decrypted<<endl;
    return 0;
}