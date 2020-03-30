#include <iostream>
using namespace std;
int main()
{
	unsigned long long int f[100]={1,1};
	int n;
	for(int i=2;i<=99;i++)
		f[i]=f[i-1]+f[i-2];
	while(cin>>n)
		cout<<f[n]<<endl; 
return 0;
}

