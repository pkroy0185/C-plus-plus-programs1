#include<iostream>
#include<cassert>
using namespace std;
enum weekday
{
 sunday=1,monday,tuesday,wednesday,thursday,friday,saturday
};
void PrintDay(enum weekday w)
{
   switch(w)
   {
    case 1:
           cout<<"Sunday";
           break;
    case 2:
           cout<<"Monday";
           break;
    case 3:
           cout<<"Tuesday";
           break;
    case 4:
           cout<<"Wednesday";
           break;
    case 5:
           cout<<"Thursday";
           break;
    case 6:
           cout<<"Friday";
           break;
    case 7:
           cout<<"Saturday";
           break;
   }
}
int main()
{
    enum weekday day1,day2;
    int n1,n2;
    cout << "Enter two days(in number) of the week : "<<endl;
    cin>>n1>>n2;
    day1=(weekday)(n1);
    day2=(weekday)(n2);
    assert(day1>0 && day1<8 && day2>0 && day2<8);
    PrintDay(day1);
    cout<<endl;
    PrintDay(day2);
    cout<<endl;
    if(day1==day2)
      cout<<"Both days are same...."<<endl;
    else
      cout<<"Both days are different..."<<endl;
    return 0;
}