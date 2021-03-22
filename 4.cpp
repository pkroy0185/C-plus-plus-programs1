/*    Draw below pattern

OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
*OO*O**OO**O*OO*OO*O**OO**O*OO
OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
*OO*O**OO**O*OO*OO*O**OO**O*OO
OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
*OO*O**OO**O*OO*OO*O**OO**O*OO
OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
*OO*O**OO**O*OO*OO*O**OO**O*OO
OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
*OO*O**OO**O*OO*OO*O**OO**O*OO

                            */
#include<iostream>
using namespace std;
void PrintPattern()
{
  int i,j;
  cout<<"\tFigure 4."<<endl<<endl;
  for(i=1;i<=10;i++)
  {
     for(j=1;j<=30;j++)
     {
        if(i%2==0)
        {
          if(j==1||j==4||j==6||j==7||j==10||j==13||j==16||j==19||j==21||j==22||j==25||j==26||j==28)
            cout<<"*";
          else
            cout<<"O";
        }
        else
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