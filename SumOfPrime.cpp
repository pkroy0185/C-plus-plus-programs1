#include<iostream>
using namespace std;
double SumOfPrime()
{
    double sum=2;
    int i=3,count=2,j;
    while(count<=100)
    {
     for(j=2;j<=i/2;j++)
        if(i%j==0)
          break;
     if(j>i/2)
       {
        sum=sum+i;
        count++;
       }
     i++;
    }
    
}
int main()
{
    double sum;
    cout<<"This program finds sum of first 100 primes.....\n";
    sum=SumOfPrime();
    cout<<"The sum of 1st 100 primes is \n"<<sum<<endl;
    return 0;
}