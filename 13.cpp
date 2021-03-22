/*    Draw below pattern

     OO*O*O*O*O*O*O*
     OO*O*O*O*O*O*O*
     **OO*O*O*O*O*O*
     OOOO*O*O*O*O*O*
     ****OO*O*O*O*O*
     OOOOOO*O*O*O*O*
     ******OO*O*O*O*
     OOOOOOOO*O*O*O*
     ********OO*O*O*
     OOOOOOOOOO*O*O*

                            */
#include<iostream>
using namespace std;
void PrintPattern()
{
   int i,j;
   cout<<" Fig no 13..\n\n"<<endl;
   for(i=1;i<=10;i++)
   {
     for(j=1;j<=15;j++)
     {
       if(j>10)
       {
         if(j%2==0)
           cout<<"O";
         else
           cout<<"*";
       }
       else
       {
       if((i%2!=0 && j%2!=0) && i==j)
          cout<<"O";
       else
        if(j%2==0)
        {
          if(i%2!=0)
          {
            if(j>(i-1))
              cout<<"O";
            else
              cout<<"*";
          }
          else
           cout<<"O";
        }
        else
         if(j%2!=0)
         {
          if(i%2==0)
          {
            if(j>i)
              cout<<"*";
            else
              cout<<"O";
          }
          else
           cout<<"*";
         }
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