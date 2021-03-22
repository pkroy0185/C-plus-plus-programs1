/*Write program, which reads a number the finds special product. If number is 2314 then 
  output is 4 + 1x4 + 3x1x4 + 2x3x1x4 = 44. If input number is 223 then output is 3 + 2x3 +
  2x2x3 = 21.*/
#include<iostream>
using namespace std;

int SpecialProduct(int no)
{
    int div=10,remain=0,result=0,sum=0,product;
    while(remain!=no)
    {
     remain=no%div;
     result=remain;
     if(remain==0)
       product=0;
     else
       product=1;
     for(;result>0; result/=10)
        product=product*(result%10);
     sum=sum+product;
     div*=10;
    }
    return sum;
}
int main()
{
    int num,sum;
    cout << "Enter number : ";
    cin>>num;
    sum=SpecialProduct(num);
    cout<<"The required sum is  "<<sum<<endl;
    return 0;
}