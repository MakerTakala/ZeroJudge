#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
		cout<<fixed<<setprecision(3)<<double(acos(0)*(b/2.0))*sqrt((b+a)*(b-a))<<endl;
}
