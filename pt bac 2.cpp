#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
    cout<<"giai phuong trinh bac 2"<<endl;
    float a,b,c,x,x1,x2;
    cout<<"ax^2+bx+c"<<endl;
    cout<<"nhap vao a"<<endl;
    cin>>a;
    cout<<"nhap vao b"<<endl;
    cin>>b;
    cout<<"nhap vao c"<<endl;
    cin>>c;
    float t=b*b-4*a*c;
    if (a!=0)
    {
        if (t>=0)
        {
            x1=(-b+sqrt(t))/2*a;
            x2=(-b-sqrt(t))/2*a;
            cout<<"x1= "<<x1<<endl;
            cout<<"x2= "<<x2;
        }
        if (t<0)
        {
            cout<<"phuong trinh vo nghiem";
            if (a==0)
            {
                if (b==0)
                {
                    cout<<"phuong trinh co vo so nghiem";
                }
            if (b!=0)
            {
                x=-c/b;

            }
            return 0;
            }
        }
    }
}








