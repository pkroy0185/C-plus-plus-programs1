#include<iostream>
using namespace std;

int main()
{
    enum open_modes
    {
     input,output,append
    };
    open_modes fileopenmode=output;
    cout<<input<<"\t"<<output<<"\t"<<append<<endl;
    cout<<"fileopenmode = "<<fileopenmode<<endl;
    int i=append;
    cout<<" Value of i : "<<i<<endl;
    enum forms
    {
     shape=1,sphere,cylinder,polygon
    };
    cout<<shape<<"\t"<<sphere<<"\t"<<cylinder<<"\t"<<polygon<<endl;
    enum points
    {
     point2d=2,point2w,point3d=3,point3w
    };
    cout<<point2d<<"\t"<<point2w<<"\t"<<point3d<<"\t"<<point3w<<endl;
 return 0;
}