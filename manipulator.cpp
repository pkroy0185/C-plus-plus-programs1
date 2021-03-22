#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int no,noH=0xf,noO=016;
    cout<<"Enter number :\n";
    cin>>no;
    cout<<"No in octadecimal       : "<<oct<<no<<"\n";
    cout<<"No in hexadecimal       : "<<hex<<no<<"\n";
    cout<<"No in present base      : "<<no<<"\n";
    cout<<"No in decimal           : "<<dec<<no<<"\n";
    cout<<"No in octadecimal       : "<<oct<<no<<"\n";
    cout<<"Show base of present No :"<<showbase<<no<<"\n";
    cout<<"No in hexadecimal       :"<<hex<<no<<"\n";
    cout<<"Remove base show mode   :"<<noshowbase<<no<<"\n";
    cout<<"No in decimal           :"<<dec<<no<<"\n";
    cout<<"NoH in decimal          :"<<dec<<noH<<"\n";
    cout<<"NoO in decimal          :"<<dec<<noO<<"\n";
    float average=28.54;
    cout<<average<<"\n";
    cout<<"Average in fixed mode   :"<<fixed<<average<<"\n";
    cout<<"Average in present mode :"<<average<<"\n";
    cout<<"Avg. in setprecision(1) :"<<setprecision(1)<<average<<"\n";
    cout<<"Avg. in scientific mode :"<<scientific<<setprecision(3)<<average<<"\n";
    cout<<"Average in fixed mode   :"<<fixed<<average<<"\n";    //to come out of scientific mode
    return 0;
}