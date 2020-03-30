#include <iostream>
using namespace std;
int main()
{
	long long int n,last,all;
	while(cin>>n)
	{
		if(n!=1)
		{
			last=((1+n)*(n+1)/4)*2-1;
			cout<<3*last-6<<endl;
		}
		else
			cout<<1<<endl;
	}
}

