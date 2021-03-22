#include<iostream>
#include<cmath>
using namespace std;
double Factorial(double n)
{
    if(n==0 || n==1)
      return 1;
    else
      return n*Factorial(n-1);
}
double Permutation(int n,int k)
{
    double n_fact,n_k_fact;
    double nPk;
    n_fact=Factorial(n);
    n_k_fact=Factorial(n-k);
    cout<<n_fact<<"   "<<n_k_fact<<endl;
    nPk=n_fact/n_k_fact;
    return nPk;
}
int main()
{
    int n,k;
    double nPk;
    cout<<"Enter the value of n and k in nPk(Permutation) : ";
    cin>>n>>k;
    nPk=Permutation(n,k);
    cout<<"The value of "<<n<<"P"<<k<<"  = "<<nPk<<endl;
    return 0;
}