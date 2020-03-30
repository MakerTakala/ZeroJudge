#include <iostream>
using namespace std;
int main()
{
	int t,a,b,sum=0,k,count=1;
	cin>>t;
	for(int i=1,sum=0;i<=t;i++,count++,sum=0){
		for(cin>>a>>b,k=a+(a%2==0);k<=b;k+=2)
			sum+=k;
		cout<<"Case "<<count<<": "<<sum<<endl;
		}	
return 0;
}

