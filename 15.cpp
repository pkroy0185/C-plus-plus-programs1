/*Write program, which reads a number then finds special sum 
in the following way. If number is 2314 then output is
 2314 + 231 + 23 + 2 = 2570. If input number is 223 then output
 is 223 + 22 + 2 = 247.*/

#include<iostream>
using namespace std;

int SpecialSum(int no)
{
    int div=1,result,sum=0;
    do
    {
     result=no/div;
     sum=sum+result;
     div*=10;
    } while(result>0);
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