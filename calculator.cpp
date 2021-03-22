#include<iostream>
using namespace std;
#define SUM(a,b)       (a+b)
#define DIFF(a,b)      (a-b)
#define PRODUCT(a,b)   (a*b)
#define QUOTIENT(a,b)  ((float)a/b)
#define REMAIN(a,b)    (a%b)
int main()
{
    int a,b;
    char op;
    cout<<"This Program performs role of calculator in which two user gives 2 integers and an operation to be performed...\n";
    cout << "Enter two numbers : ";
    cin>>a>>b;
    cout<<"Enter operation to be performed (+,-,*,/,%) : ";
    cin>>op;
    switch(op)
    {
     case '+':
              cout<<"Sum   of     both   numbers      is : "<<SUM(a,b)<<endl;
              break;
     case '-':
              cout<<"Difference (a-b) of both numbers is : "<<DIFF(a,b)<<endl;
              break;
     case '*':
              cout<<"Product    of   both   numbers   is : "<<PRODUCT(a,b)<<endl;
              break;
     case '/':
              if(b==0)
                cout<<"Sorry, denominator is zero."<<endl;
              else
                cout<<"Quotient        of   ( a/b )   is : "<<QUOTIENT(a,b)<<endl;
              break;
     case '%':
              if(b==0)
                cout<<"Sorry, denominator is zero."<<endl;
              else
                cout<<"Remainder        of       a%b    is : "<<REMAIN(a,b)<<endl;
              break;        
     default:
              cout<<"Sorry,Wrong Operation..."    <<endl; 
            
    }      
     return 0;
}