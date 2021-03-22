#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int Num(int no[],int index)
{
    int i=0,num=0;
    for(index;index>=0;index--)
       num=num+(no[i++]*pow(10,index));
    return num;
}
int main()
{
    int len=0,index=0,i,sum=0,count=0,add=0;
    int no[6]={0,0,0,0,0,0};
    char ch;
    char str[100];
    cout<<"This program takes a string and adds all the numbers and prints sum on the screen..."<<endl;
    cout<<"Enter the string :"<<endl;
    cin.getline(str,100);
    len=cin.gcount();
    for(i=0;i<len;i++)
    {
     cin.putback(str[i]);
     ch=cin.peek();
     if(isdigit(ch))
       {
         
         no[index++]=static_cast<int>(ch)-48;
         if(!isdigit(str[i+1]))
           {
            add=Num(no,index-1);
            sum=sum+add;
            count++;
            index=0;
           }
         else
           continue;
         
       }
    }
    if(count==2)
      {
       cout<<str<<endl;
       cout<<"m+n = "<<sum<<endl;
      }
    else
      {
       cout<<str<<endl;
       cout<<"Sum = "<<sum<<endl;
      }
     return 0;
}