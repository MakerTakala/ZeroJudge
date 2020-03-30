#include <iostream>
using namespace std;
int main()
{
	int a,b,i,k;
	cin>>k;
	for(i=1;i<=k;i++)
	{
		cin>>a>>b; 
		cout<<((((a-2)/3)+((a-2)%3!=0)))*((((b-2)/3)+((b-2)%3!=0)))<<endl;
	}
}
