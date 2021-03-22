#include<iostream>
using namespace std;
float Poly(float x,float a,float b=0,float c=0,float d=0)
{
    if(b==0 && c==0 && d==0)
      cout<<"x^0"<<endl;
    else
      if(c==0 && d==0)
        cout<<"x^1"<<endl;
      else
        if(d==0)
          cout<<"x^2"<<endl;
        else
          cout<<"x^3"<<endl;
    return a+(b+(c+(d*x))*x)*x;
}
int main()
{
    float x=2.5,result;
    //Evaluating Constant polynomial (Poly(x,7)=Poly(x,7,0,0,0))
    result=Poly(x,7);
    cout<<"Poly(x,7) = "<<result<<endl;
    //Evaluating First degree polynomial (Poly(x,7,6)=Poly(x,7,6,0,0))
    result=Poly(x,7,6);
    cout<<"Poly(x,7,6) = "<<result<<endl;
    //Evaluating second degree polynomial (Poly(x,7,6,5)=Poly(x,7,6,5,0))
    result=Poly(x,7,6,5);
    cout<<"Poly(x,7,6,5) = "<<result<<endl;
    //Evaluating third degree polynomial (Poly(x,7,6,5,4)=Poly(x,7,6,5,4))
    result=Poly(x,7,6,5,4);
    cout<<"Poly(x,7,6,5,4) = "<<result<<endl;
    return 0;
}
