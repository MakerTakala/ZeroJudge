#include <iostream>
using namespace std;
int main()
{
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		int sum=1;
		if(n==0)
			sum=0;
		while(n){
			sum*=n%10;
			n/=10;
		}
		cout<<sum<<endl;
	}
return 0;
}
