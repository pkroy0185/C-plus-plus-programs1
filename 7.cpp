/*     Draw below pattern

     ********************
     OOOOOOOOOOOOOOOOOOOO
     ********************
     OOOOOOOOOOOOOOOOOOOO
     ********************
     OOOO**********OOOOOO
     ********************
     OOOO**********OOOOOO
     ********************
     OOOO**********000000
    
                           */
#include<iostream>
using namespace std;

void PrintPattern()
{
  int i,j;
  cout<<"\tFigure 7."<<endl<<endl;
  for(i=1;i<=10;i++)
  {
     for(j=1;j<=20;j++)
     {
        if(i%2==0)
        {
          if(i>4)
          {
            if(j>4 && j<14)
              cout<<"*";
            else
              cout<<"O";
          }
          else
            cout<<"O";
        }
        else
          cout<<"*";
     }
    cout<<endl;
  }
}
int main()
{
    PrintPattern();
    return 0;
}