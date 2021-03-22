#include<iostream>
#include<cmath>
using namespace std;
float Volume(float l,float b=0, float h=0)
{
    float volume;
    if(b==0 && h==0)
      volume=pow(l,3);
    else
      if(h==0)
        volume=M_PI*pow(l,2)*b;
      else
        volume=l*b*h;
    return volume;
}
int main()
{
    float l,b,h;
    cout<<"This program finds the volume of cube, cuboid or cylinder..."<<endl;
    cout<<"Volume of Cube.....\nEnter the side of cube : ";
    cin>>l;
    cout<<"Volume of given cube is  "<<Volume(l)<<" unit^3."<<endl;
    cout<<"Volume of Cuboid.....\nEnter the length,breadth and height of cuboid : ";
    cin>>l>>b>>h;
    cout<<"Volume of given cube is  "<<Volume(l,b,h)<<" unit^3."<<endl;
    cout<<"Volume of Cylinder...\nEnter the radius and height of Cylinder : ";
    cin>>l>>b;
    cout<<"Volume of given cube is  "<<Volume(l,b)<<" unit^3."<<endl;
    return 0;
}