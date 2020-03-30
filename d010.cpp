#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	while(cin>>n){
		sum=0;
		for(int i=1;i<=n/2;i++){
			if(!(n%i))
				sum+=i;
		}
		if(sum>n)
			cout<<"盈數";
		else if(sum<n)
			cout<<"虧數";
		else
			cout<<"完全數";
		cout<<endl;
	}
return 0;
}

