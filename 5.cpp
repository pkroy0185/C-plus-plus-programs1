/*     Draw below pattern

      OOOOOO*****OOOOOOOOO
      OOOOO******OOOOOOOOO
      OOOO*******OOOOOOOOO
      OOO********OOOOOOOOO
      OO*********OOOOOOOOO
      O**********OOOOOOOOO
      ***********OOOOOOOOO
      ***********OOOOOOOOO
      ********************
      ********************
    
                            */
#include<iostream>
using namespace std;
void PrintPattern()
{
  int i,j,k;
  cout<<"\tFigure 5."<<endl<<endl;
  for(i=1,k=6;i<=10;i++,k=k-2)
  {
     for(j=1;j<=20;j++)
     {
        if(i<=8)
        {
          if(j>11)
            cout<<"O";
          else
            if(j<(i+k))
              cout<<"O";
            else
              cout<<"*";
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