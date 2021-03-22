/*      By Pintu Roy
        MSc(1st year)
        date : 14/09/2020
        Assignment1
                                  */
////////////Header Files////////////
#include<iostream>  // for input output stream
#include<cmath>     // for maths function
///////////////////////////////////
using namespace std;
/////function to display pattern///
void DisplayPattern()
{
 cout<<"*********      ***        *\n";
 cout<<"*       *     *    *     ***\n";
 cout<<"*       *    *      *   *****\n";
 cout<<"*       *    *      *     *\n";
 cout<<"*       *    *      *     *\n";
 cout<<"*       *    *      *     *\n";
 cout<<"*       *    *      *     *\n";
 cout<<"*       *     *    *      *\n";
 cout<<"*********      ***        *\n";
 cout<<"      *\n";
 cout<<"     *  *\n";
 cout<<"    *    *\n";
 cout<<"   *      *\n";
 cout<<"  *        *\n";
 cout<<"   *      *\n";
 cout<<"    *    *\n";
 cout<<"     *  *\n";
 cout<<"       *\n";
}
////function to check if a number is multiple of other/////
int IsMultiple(int no1,int no2)
{
    if(no1%no2==0)
       return 1;
    else
       return 0;
}
////function to split digits of a number and display it///
void SplitDigit(int no)
{
     int num=10000,i=0;
     for(no;no>0;num=num/10)
        {
          cout<<no/num<<"   ";
          no=no%num;
          i++;
        }
     while(i<5)
         {
          cout<<0<<"   ";
          i++;
         }
}
////function to return a+(a*b)+(a*b*c)+(a*b*c*d)
int Calculate(int a,int b,int c,int d)
{
  return a+(a*b)+(a*b*c)+(a*b*c*d);
}
///function to print 4 numbers in reverse///
void PrintReverse(int a,int b,int c,int d)
{
    int num=(a*1000)+(b*100)+(c*10)+d,i,j=1;
    if(num==0)
      i=4;
    else
      if(num>0 && num<10)
        i=3;
      else
      if(num>9 && num<100)
        i=2;
      else
      if(num>99 && num<1000)
        i=1;
    for(num;num>0;num/=10)
       {
        cout<<num%10<<"   ";
       }
    while(j<=i)
         {
           cout<<0<<"   ";
           j++;
         }
}
///function to return area of a triangle///
float TriangleArea1(int a,int b,int c)
{
      float area,s;
      s=(a+b+c)/2;
      if(s<a || s<b || s<c)
        return -1;
      else
        {
          area=s*(s-a)*(s-b)*(s-c);
          area=pow(area,0.5);
          return area;
        }
}
///function to return Distance between 2 points//
float Distance1(int a,int b,int c,int d)
{
    float distance;
    distance=(float)pow(pow(c-a,2)+pow(d-b,2),0.5);
    return distance;
}
///function to return area of triangle with given 3 points//
float TriangleArea2(int a,int b,int c,int d,int e,int f)
{
    float s1,s2,s3,s,area;
    s1=pow(pow(c-a,2)+pow(d-b,2),0.5);
    s2=pow(pow(e-c,2)+pow(f-d,2),0.5);
    s3=pow(pow(a-e,2)+pow(b-f,2),0.5);
    s=(s1+s2+s3)/2;
      if(s<s1 || s<s2 || s<s3)
        return -1;
      else
        {
          area=s*(s-s1)*(s-s2)*(s-s3);
          area=pow(area,0.5);
          return area;
        }
}
/// function to print slope of a line///
float PrintSlope(int a,int b, int c)
{
      float slope;
      if(b==0)
        return -1;
      else
        {
          slope=(float)-a/b;
          return slope;
        }
}
///function to return Distance between a point and a line///
float Distance2(int a,int b,int c,int d,int e)
{
    float d1,d2, distance;
    if(c==0 && d==0)
      return -1;
    else
      {
       d1=(a*c)+(b*d)+e;
       if(d1<0)
         d1=-d1;
       d2=pow(pow(c,2)+pow(d,2),0.5);
       distance=(float)d1/d2;
       return distance;
      }
}
///function to print center and radius of circle//
void Circle(int a,int b,int c)
{
    float x1,x2,radius;
    if((pow(a,2)+pow(b,2))<c)
       cout<<"Radius of circle is imaginary.\n";
    else
      {
        x1=-a;
        x2=-b;
        radius=pow(pow(a,2)+pow(b,2)-c,0.5);
        cout<<"Center is ("<<x1<<","<<x2<<")\n";
        cout<<"Radius of circle is "<<radius<<" units\n";
     }
}
///function to print point of intersection of two lines//
void PrintIntersection(int a,int b,int c,int p,int q,int r)
{
    float x,y;
    if(a*q==b*p)
       cout<<"lines don't intersect....\n";
    else
      {
        x=(float)(b*r-c*q)/(a*q-b*p);
        y=(float)(c*p-a*r)/(a*q-b*p);
        cout<<"Point of intersection is ("<<x<<","<<y<<")\n";
      }
}
///function to check if triangle is Right triangle//
int IsRightTriangle(int a,int b,int c)
{
    if(a>(b+c) || b>(a+c) || c>(a+b))
       return -1;
    else
      if((pow(a,2)==pow(b,2)+pow(c,2))||(pow(b,2)==pow(a,2)+pow(c,2))||(pow(c,2)==pow(b,2)+pow(a,2)))
        return 1;
      else
        return 0;
}
///function to print anlge A of triangle///
void AngleA(int a,int b,int c)
{
    float CosA,AngleR,AngleD;
    if(a>(b+c) || b>(a+c) || c>(a+b))
       cout<<"Wrong input.....\n";
    else
      {
        CosA=(float)(pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
        AngleR=acos(CosA);
        AngleD=(180/3.14)*AngleR;
        cout<<"Angle A in Radian is "<<AngleR<<"\n";
        cout<<"Angle A in Degree is "<<AngleD<<"\n";
      }
}
///function to display roots of quadratic Equation//
void RootOfEquation(int a,int b,int c)
{
    float D,R1,R2;
    if(a==0)
      cout<<"Equation is not quadratic.....\n";
    else
      {
       D=pow(b,2)-(4*a*c);
       if(D>0)
         {
          R1=(float)-b/(2*a)+(float)pow(D,0.5)/(2*a);
          R2=(float)-b/(2*a)-(float)pow(D,0.5)/(2*a);
          cout<<" Root1 is "<<R1<<"\n";
          cout<<" Root2 is "<<R2<<"\n";
         }
       else
        if(D<0)
          {
           cout<<" Root1 is "<<(float)-b/(2*a)<<" + "<<(float)pow(-D,0.5)/(2*a)<<"i\n";
           cout<<" Root1 is "<<(float)-b/(2*a)<<" - "<<(float)pow(-D,0.5)/(2*a)<<"i\n";
          }
        else
          cout<<" Root of Equation is "<<(float)-b/(2*a)<<" with multiplicities 2\n";
      }
}
//////////main function///////////
int main()
{
    int choice,no1,no2,no3,no4,no5,no6,result;
    float area,distance;
    cout << "Enter question number to run the program : ";
    cin>>choice;
    switch(choice)
    {
          case 1:
                  DisplayPattern();
                  break;
          case 2:
                  cout<<"Enter no1 : ";
                  cin>>no1;
                  cout<<"Enter no2 :";
                  cin>>no2;
                  if(IsMultiple(no1,no2)==1)
                    cout<<"Yes, "<<no1<<" is multiple of "<<no2<<endl;
                  else 
                    cout<<"No, "<<no1<<" is not a multiple of "<<no2<<endl;
                  break;
          case 3:
                  cout<<"Enter your 5-digit number : ";
                  cin>>no1;
                  if((0<=no1/10000)&&(no1/10000<=9))
                    SplitDigit(no1);
                  else
                    cout<<"Sorry, Number doesn't have 5 digits.\n";
                  break;
          case 4:
                  cout<<"Enter a,b,c,d : \n";
                  cin>>no1>>no2>>no3>>no4;
                  result=Calculate(no1,no2,no3,no4);
                  cout<<"The result is : "<<result<<"\n";
                  break;
          case 5:
                  cout<<"Enter four numbers of single digits: \n";
                  cin>>no1>>no2>>no3>>no4;
                  if((no1<0 || no1>9)||(no2<0 || no2>9)||(no3<0 || no3>9)||(no4<0 || no4>9))
                      cout<<"Sorry, Invalid Input...\n";
                  else
                    PrintReverse(no1,no2,no3,no4);
                  break;
          case 6:
                  cout<<"Enter length of sides of a triangle:\n";
                  cin>>no1>>no2>>no3;
                  area=TriangleArea1(no1,no2,no3);
                  if(area==-1)
                    cout<<"Wrong Input.....\n";
                  else
                    cout<<"Area of given triangle is "<<area<<" square units.\n";
                  break;
          case 7:
                  cout<<"Enter (a,b): \n";
                  cin>>no1>>no2;
                  cout<<"Enter (c,d): \n";
                  cin>>no3>>no4;
                  distance=Distance1(no1,no2,no3,no4);
                  cout<<"The distance between two points is  "<<distance<<" units.\n";
                  break;
          case 8:
                  cout<<"Enter (a,b): \n";
                  cin>>no1>>no2;
                  cout<<"Enter (c,d): \n";
                  cin>>no3>>no4;
                  cout<<"Enter (e,f): \n";
                  cin>>no5>>no6;
                  area=TriangleArea2(no1,no2,no3,no4,no5,no6);
                  if(area==-1)
                    cout<<"Wrong Input.....\n";
                  else
                    cout<<"Area of given triangle is "<<area<<" square units.\n";
                  break;
          case 9:
                  cout<<"Enter a,b,c of ax+by+c=0: \n";
                  cin>>no1>>no2>>no3;
                  distance=PrintSlope(no1,no2,no3);
                  if(distance==-1)
                    cout<<" Slope doesn't exist for line..\n";
                  else
                    if(distance==0)
                      cout<<"Line is vertical....\n";
                    else
                      cout<<" Slope for line is "<<distance<<" \n";
                  break;
          case 10:
                  cout<<"Enter (a,b): \n";
                  cin>>no1>>no2;
                  cout<<"Enter c,d,e of cx+dy+e=0: \n";
                  cin>>no3>>no4>>no5;
                  distance=Distance2(no1,no2,no3,no4,no5);
                  if(distance==-1)
                     cout<<"Input is wrong for line....\n";
                  else
                     cout<<"Distance between line and point is "<<distance<<" units.\n";
                  break;
          case 11:
                  cout<<"Enter a,b,c of equation of circle x^2+y^2+2ax+2by : \n";
                  cin>>no1>>no2>>no3;
                  Circle(no1,no2,no3);
                  break;
          case 12:
                  cout<<"Enter a,b,c of ax+by+c=0: \n";
                  cin>>no1>>no2>>no3;
                  cout<<"Enter d,e,f of dx+ey+f=0: \n";
                  cin>>no4>>no5>>no6;
                  PrintIntersection(no1,no2,no3,no4,no5,no6);
                  break;
          case 13:
                  cout<<"Enter length of sides of a triangle:\n";
                  cin>>no1>>no2>>no3;
                  choice=IsRightTriangle(no1,no2,no3);
                  if(choice==-1)
                     cout<<"Wrong input....\n";
                  else
                    if(choice==0)
                      cout<<"False\n";
                    else
                    if(choice==1)
                      cout<<"True\n";
                  break;
          case 14:
                  cout<<"Enter length of sides of a triangle:\n";
                  cin>>no1>>no2>>no3;
                  AngleA(no1,no2,no3);
                  break;
          case 15:
                  cout<<"Enter a,b,c of ax^2+bx+c=0: \n";
                  cin>>no1>>no2>>no3;
                  RootOfEquation(no1,no2,no3);
                  break;
          default:
                  cout<<"wrong input...sorry\n";
    }      
     return 0;
}
//////////end of main//////////////