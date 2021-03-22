#include<iostream>
using namespace std;
double Factorial(int n)
{
   int i;
   double fact;
   if(n==0)
     return 1;
   else
     for(i=1,fact=1;i<=n;i++)
        fact=fact*i;
   return fact;
}
int main()
{
    int i,n;
    double fact;
    cout<<"Enter the number till which u want factorial  : ";
    cin>>n;
    cout<<"Factorial of all numbers upto "<<n<<" are..."<<endl;
    for(i=0;i<=n;i++)
    {
      fact=Factorial(i);
      cout<<i<<"! = "<<fact<<endl;
    }
    return 0;
}