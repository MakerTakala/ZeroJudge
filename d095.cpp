#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	float h,m,x;
	char clone;
	while(cin>>h>>clone>>m){
		if(h==0&&m==0)
			break;
		else{
			h=(h*30+m*0.5);
			m=m*6;
			x=fabs(fabs(h-m)+(fabs(h-m)>180)*(-360));
			cout<<fixed<<setprecision(3)<<x<<endl;
		}
	}
}
