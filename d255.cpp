#include <iostream>
#include <cstdio>
using namespace std;
int gcd(int x,int y){
	int r;
	do{
		r=x%y;
		x=y;
		y=r;
	}while(r!=0);
	return x;
}
int main(){
	int n;
	while(scanf("%d",&n)&&n!=0){
		int G=0;
		for(int i=1;i<n;i++){
			for(int k=i+1;k<=n;k++)
				G+=gcd(i,k);
		}
		printf("%d\n",G);
	}
return 0;
}

