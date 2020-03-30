#include <iostream>
#include <cstdio>
using namespace std;
unsigned long long f(int x){
	unsigned long long int sum=1;
	for(int i=2;i<=x;i++)
		sum*=i;
	return sum;
}
int main(){
	int t,n,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&k);
		cout<<f(n)/(f(k)*f(n-k))<<endl;
	}
return 0;
}

