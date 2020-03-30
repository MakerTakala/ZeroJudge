#include <iostream>
#include <cstdio>
using namespace std;
long long int f(long long int a,int x){
	if(a==1)
		return 1;
	else
		return f(a-1,x)+(x*a-(2*x-1));
}
int main(){
	int x;
	while(scanf("%d",&x)!=EOF){
		int sum=0;
		for(int i=1;i<=50;i++)
			sum+=f(i,x);
		cout<<sum<<endl;
	}

return 0;
}
//sum=19600x+1275
