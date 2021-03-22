#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main()
{
    char input[200];
    int alphaL,alphaU,digit,space,printing,len;
    alphaL=alphaU=digit=space=printing=0;
    cout << "Enter the atring(lenght<200) :\n";
    gets(input);
    len=strlen(input);
    cout<<len<<endl;
    for(int i=0;i<len;i++)
       {
        if(islower(input[i]))
          alphaL++;
        else
         if(isupper(input[i]))
            alphaU++;
          else
           if(isdigit(input[i]))
            digit++;
           else
            if(isspace(input[i]))
              space++;
            else
             if(ispunct(input[i]))
               printing++;
       }
    cout<<"Number of lowercase alphabets :"<<alphaL<<endl;
    cout<<"Number of uppercase alphabets :"<<alphaU<<endl;
    cout<<"Number      of      digits    :"<<digit<<endl;
    cout<<"Number   of   white    spaces :"<<space<<endl;
    cout<<"Number of printing characters :"<<printing<<endl;
    return 0;
}