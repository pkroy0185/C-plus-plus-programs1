/*    Draw below pattern

    OOOOOOOOOOOOOOOOO
    OOOOOO*****OOOOOO
    OOOO*********OOOO
    OOO***********OOO
    OO*************OO
    OO*************OO
    OO*************OO
    OOO***********OOO
    OOOO*********OOOO
    OOOOOO*****OOOOOO
    OOOOOOOOOOOOOOOOO

                           */
#include<iostream>
using namespace std;
void PrintPattern()
{
   int i,j;
  cout<<"\tFigure 8."<<endl<<endl;
  for(i=1;i<=11;i++)
  {
     for(j=1;j<=17;j++)
     {
        if(i>1 && i<11)
        {
          if(j>2 && j<16)
          {
           if(j>6 && j<12)
             cout<<"*";
           else
            if((i>4 && i<8)&&((j>2 && j<7)||(j>11 && j<16)))
              cout<<"*";
            else
             if((i==3 || i==9)&&((j>4 && j<7)||(j>11 && j<14)))
               cout<<"*";
             else
              if((i==4 || i==8)&&((j>3 && j<7)||(j>11 && j<15)))
                cout<<"*";
              else
                cout<<"O";
           }
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