#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		if (pow(b,2)-4*a*c>0)
			cout<<"Two different roots x1="<<((-1)*b+sqrt(pow(b,2)-4*a*c))/2/a<<" , x2="<<((-1)*b-sqrt(pow(b,2)-4*a*c))/2/a<<endl;
		else if (pow(b,2)-4*a*c==0)
			cout<<"Two same roots x="<<(-1)*b/2/a<<endl;
		else
			cout<<"No real root"<<endl;
	}
	return 0;
}
