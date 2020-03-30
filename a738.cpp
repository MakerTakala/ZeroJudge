#include <iostream>
#include <cstdio>
int gcd(int x,int y){
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}
using namespace std;
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
		cout<<gcd(a,b)<<endl;
return 0;
}

