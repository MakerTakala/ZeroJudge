#include <iostream>
using namespace std;
int main()
{
	int i,n,a;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		if((a%4)==0&&(a%100)!=0||(a%400)==0)
			cout<<"a leap year"<<endl;
		else
			cout<<"a normal year"<<endl;
	}
 }
