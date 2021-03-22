/*     Draw below pattern

     ********************
     ********************
     ********************
     *****OO*************
     ****OOOO************
     ***OOOOOO***********
     **OOOOOOOO**********
     *OOOOOOOOOO*********
     OOOOOOOOOOOO********
     OOOOOOOOOOOOO*******
    
                            */
#include<iostream>
using namespace std;
void PrintPattern()
{
  int i,j,k=6,l=7,prev_i=4;
  cout<<"\tFigure 9."<<endl<<endl;
  for(i=1;i<=10;i++)
  {
     for(j=1;j<=20;j++)
     {
        if(i>3 && j<14)
        {
          if(i!=prev_i)
          {
            prev_i=i;
            k=k-1;
            l=l+1;
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