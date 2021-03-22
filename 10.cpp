/*      Draw below pattern

    ********************
    ********************
    ******OO************
    *****OOOOO**********
    ****OOOOOOOO********
    ***OOOOOOOOOOO******
    **OOOOOOOOOOOOOO****
    *OOOOOOOOOOOOOOOOO**
    OOOOOOOOOOOOOOOOOOOO
    OOOOOOOOOOOOOOOOOOOO
    
                             */
#include<iostream>
using namespace std;

void PrintPattern()
{
  int i,j,k=7,l=8,prev_i=3;
  cout<<"\tFigure 10."<<endl<<endl;
  for(i=1;i<=10;i++)
  {
     for(j=1;j<=20;j++)
     {
        if(i>2)
        {
          if(i!=prev_i)
          {
            prev_i=i;
            k=k-1;
            l=l+2;
          }
          if(j<k || j>l)
            cout<<"*";
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