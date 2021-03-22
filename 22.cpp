/*Write program, which reads numbers x and 
another integer k and finds it kth last even digit. 
If x=24156 and k=2 then answer is 4. If k=3 then answer is 2.*/
#include<iostream>
using namespace std;
int KthEvenNo(int no,int k)
{
    int remain,count=0;
    while(no>0)
    {
     remain=no%10;
     if(remain%2==0)
       count++;
     if(count==k)
     {
       no=remain;
       break;
     } 
     no/=10;
    }
    return no;
}
int main()
{
    int num,no,k;
    cout << "Enter number : ";
    cin>>num;
    cout<<"Enter the value of k : ";
    cin>>k;
    no=KthEvenNo(num,k);
    if(no==0)
      cout<<"There is no even digit in given position..."<<endl;
    else
      cout<<"Kth even digit is : "<<no<<endl;
    return 0;
}