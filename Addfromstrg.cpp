#include<iostream>
using namespace std;

int main()
{
    int add,sum=0;
    char ch;
    while(1)
    {
     if((ch=getchar())=='\n')
       break;
     if(isdigit(ch))
     {
      for(add=ch-'0'; isdigit(ch=getchar())&&ch!='\n';add=add*10+ch-'0');
         sum=sum+add;
     }
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}