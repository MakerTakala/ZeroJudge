#include <cstdio>
int f(int x){
	return x+(x==1?0:f(x-1));
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
return 0;
}

