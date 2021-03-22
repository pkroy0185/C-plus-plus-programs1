/*      Draw below pattern

     O****O****O****O****
     *OOOO*OOOO*OOOO*OOOO
     O****O****O****O****
     *OOOO*OOOO*OOOO*OOOO
     O****O****O****O****
     *OOOO*OOOO*OOOO*OOOO
     O****O****O****O****
     *OOOO*OOOO*OOOO*OOOO
     O****O****O****O****
     *OOOO*OOOO*OOOO*OOOO

                            */
#include<iostream>
using namespace std;

void PrintPattern()
{
  int i,j,k;
  cout<<"\tFigure 12."<<endl<<endl;
  for(i=1;i<=10;i++)
  {
     k=0;
     for(j=1;j<=20;j++)
     {
        if(i%2==0)
        {
          if(j==(5*k+1))
          {
            cout<<"*";
            k++;
          }
          else
            cout<<"O";
        }
        else
        {
          if(j==(5*k+1))
          {
            cout<<"O";
            k++;
          }
          else
            cout<<"*";
        }
     }
    cout<<endl;
  }
}
int main()
{
    PrintPattern();
    return 0;
}