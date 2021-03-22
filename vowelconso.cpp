#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    char input[200];
    int  vowel=0,conso=0,digit=0,len;
    cout << "Enter the string(lenght<200) :\n";
    gets(input);
    len=strlen(input);
    for(int i=0;i<len;i++)
       {
        if(isalpha(input[i]))
          {
           if((input[i]=='a')||(input[i]=='e')||(input[i]=='i')||(input[i]=='o')||(input[i]=='u')||(input[i]=='A')||(input[i]=='E')||(input[i]=='I')||(input[i]=='O')||(input[i]=='U'))
             vowel++;
           else
             conso++;
          }
        else
         if(isdigit(input[i]))
            digit++;
       }
    cout << "Number of Vowels     : "<<vowel<<endl;
    cout << "Number of Consonants : "<<conso<<endl;
    cout << "Number of Digits     : "<<digit<<endl;
    return 0;
}