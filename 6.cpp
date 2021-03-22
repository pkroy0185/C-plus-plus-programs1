/*     Draw below pattern

    OOOOOOOOOOOOOOO
    OO*O*O*O*O*O*O*
    O*OOOOOOOOOOOOO
    OOOO*O*O*O*O*O*
    O*O*OOOOOOOOOOO
    OOOOOO*O*O*O*O*
    O*O*O*OOOOOOOOO
    OOOOOOOO*O*O*O*
    O*O*O*O*OOOOOOO
    OOOOOOOOOO*O*O*

                            */
#include<iostream>
using namespace std;

void PrintPattern()
{
  int i,j;
  cout<<"\tFigure 6."<<endl<<endl;
  for(i=1;i<=10;i++)
  {
     for(j=1;j<=15;j++)
     {
        if(i%2!=0)
        {
          if(j%2==0 && j<i)
            cout<<"*";
          else
            cout<<"O";
        }
        else
        {
          if(j%2!=0 && j>i)
            cout<<"*";
          else 
            cout<<"O";
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