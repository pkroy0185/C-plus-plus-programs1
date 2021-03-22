#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int x,y,choice;
    float angle,X,Y;
    cout << "This program checks different function of math library...\n";
    cout<<"Enter instructed numbers to check the corresponding function.\n";
    cout<<"1. Ceiling function\n2. Floor function\n3. Cos function\n4. Sin function\n5. Tan function\n6. Exponential function\n7. Absolute function\n8. Mode function\n9. Log function\n10. Log base 10 function\n11. Power function\n12. Squareroot function : ";
    cin>>choice;
    cout<<fixed<<setprecision(2);
    switch(choice)
    {
     case 1:
            cout<<"Enter the integer value of x in ceil(x) : ";
            cin>>x;
            cout<<"The resultant value is : "<<ceil(x)<<endl;
            break;
     case 2:
            cout<<"Enter the integer value of x in floor(x) : ";
            cin>>x;
            cout<<"The resultant value is : "<<floor(x)<<endl;
            break;
     case 3:
            cout<<"Enter the degree value of x in Cos(x) : ";
            cin>>angle;
            angle=(3.14/180)*angle;
            cout<<"The resultant value is : "<<cos(angle)<<endl;
            break;
     case 4:
            cout<<"Enter the degree value of x in Sin(x) : ";
            cin>>angle;
            angle=(3.14/180)*angle;
            cout<<"The resultant value is : "<<sin(angle)<<endl;
            break;
     case 5:
            cout<<"Enter the degree value of x in Tan(x) : ";
            cin>>angle;
            angle=(3.14/180)*angle;
            cout<<"The resultant value is : "<<tan(angle)<<endl;
            break;
     case 6:
            cout<<"Enter the degree value of x in exp(x) : ";
            cin>>angle;
            angle=(3.14/180)*angle;
            cout<<"The resultant value is : "<<exp(angle)<<endl;
            break;
     case 7:
            cout<<"Enter the  value of x in fabs(x) : ";
            cin>>X;
            cout<<"The resultant value is : "<<fabs(X)<<endl;
            break;
     case 8:
            cout<<"Enter the  value of x and y in fmod(x,y) : ";
            cin>>X>>Y;
            cout<<"The resultant value is : "<<fmod(X,Y)<<endl;
            break;
     case 9:
            cout<<"Enter the   value of x in log(x) : ";
            cin>>X;
            cout<<"The resultant value is : "<<log(X)<<endl;
            break;
    case 10:
            cout<<"Enter the   value of x in log10(x) : ";
            cin>>X;
            cout<<"The resultant value is : "<<log10(X)<<endl;
            break;
    case 11:
            cout<<"Enter the  value of x and y in pow(x,y) : ";
            cin>>X>>Y;
            cout<<"The resultant value is : "<<pow(X,Y)<<endl;
            break;
    case 12:
            cout<<"Enter the  value of x in sqrt(x) : ";
            cin>>X;
            cout<<"The resultant value is : "<<sqrt(X)<<endl;
            break;
    default:
            cout<<"Sorry,wrong choice... : "<<endl;      
    }
    return 0;
}