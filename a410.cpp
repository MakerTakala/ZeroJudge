#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c,d,e,f;
    while(cin>>a>>b>>c>>d>>e>>f){
        float x,y;
        if(a*e==d*b)
            if(c*e==b*f)
                cout<<"Too many"<<endl;
            else
                cout<<"No answer"<<endl;
        else{
            double x=(c*e-b*f)/(a*e-b*d);
            double y=(c*d-a*f)/(b*d-a*e);
            cout<<"x="<<fixed<<setprecision(2)<<x<<endl;
            cout<<"y="<<fixed<<setprecision(2)<<y<<endl;
        }
    }
return 0;
}
