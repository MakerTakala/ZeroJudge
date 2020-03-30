#include <iostream>
using namespace std;
int main()
{
	int n,k,i,a=0,b=0,c=0;
	cin>>n;
	for(k=1;k<=n;k++)
	{
		cin>>i;
		if(i%3==0)
			a++;
		else if(i%3==1)
			b++;
		else
			c++;
	}
cout<<a<<" "<<b<<" "<<c;
}
