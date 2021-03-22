/*Write program, which reads a number the finds special sum. If number is 2314 then output 
is 4 + 14 + 314 + 2314 = 2646. If input number is 223 then output is 3 + 23 + 223 = 249. If 
input is 12564 then output is 4 + 64 + 564 + 2564 + 12564 = 15760*/

#include<iostream>
using namespace std;
int SpecialSum(int no)
{
    int div=10,remain,sum=0;
    do
    {
     remain=no%div;
     sum=sum+remain;
     div*=10;
    } while(remain!=no);
    return sum;
}
int main()
{
    int num,sum;
    cout << "Enter number : ";
    cin>>num;
    sum=SpecialSum(num);
    cout<<"The required sum is  "<<sum<<endl;
    return 0;
}