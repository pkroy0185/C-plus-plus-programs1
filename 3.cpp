/*     Draw below pattern

     O*O*O*O*O*
     *O*O*O*O*O
     O*O*O*O*O*
     *O*O*O*O*O
     O*O*O*O*O*
     *O*O*O*O*O
     O*O*O*O*O*
     *O*O*O*O*O
     O*O*O*O*O*

                            */
#include<iostream>
using namespace std;
void PrintPattern()
{
  int i,j;
  cout<<endl<<"\tFigure 3."<<endl<<endl;
  for(i=1;i<=9;i++)
  {
     for(j=1;j<=10;j++)
     {
        if(((j%2==0)&&(i%2!=0))||((j%2!=0)&&(i%2==0)))
          cout<<"*";
        else
          if(((i%2==0)&&(j%2==0))||((j%2!=0)&&(i%2!=0)))
           cout<<"O";
     }
    cout<<endl;
  }
}
int main()
{
    PrintPattern();
    return 0;
}