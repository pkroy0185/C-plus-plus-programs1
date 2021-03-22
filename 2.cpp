/*     Draw below pattern

     OOOOOOOO************
     OOOOOOOO************
     OOOOOOOO************
     ********************
     ********************
     ********************
     ********************
     ***************OOOOO
     ***************OOOOO
     ***************OOOOO

                             */
#include<iostream>
using namespace std;
void PrintPattern()
{
  int i,j;
  cout<<endl<<"\tFigure 2."<<endl<<endl;
  for(i=1;i<=10;i++)
  {
     for(j=1;j<=20;j++)
     {
        if((j<9&&i<4)||(j>15&&i>7))
          cout<<"O";
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