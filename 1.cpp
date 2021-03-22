/*     Draw below pattern  

     ********************
     *O*O*O*O*O*O*O*O*O*O
     ********************
     *O*O*O*O*O*O*O*O*O*O
     ********************
     *O*O*O*O*O*O*O*O*O*O
     ********************
     *O*O*O*O*O*O*O*O*O*O
     ********************
     *O*O*O*O*O*O*O*O*O*O

                             */
#include<iostream>
using namespace std;
void PrintPattern()
{
  int i,j;
  cout<<"\tFigure 1."<<endl<<endl;
  for(i=1;i<=10;i++)
  {
     for(j=1;j<=20;j++)
     {
        if(i%2==0)
        {
          if(j%2==0)
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