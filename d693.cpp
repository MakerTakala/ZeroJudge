#include <iostream>
#include <cstdio>
using namespace std;
long long int gcd(int x,long long int y){
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}
long long int lcm(int x,long long int y){
	return x*y/gcd(x,y);
}
int main(){
	int n;
	while(cin>>n&&n!=0){
		int a;
		long long int g;
		cin>>g;
		for(int i=1;i<n;i++){
			cin>>a;	
			g=lcm(a,g);
		}
	cout<<g<<endl;
	}
return 0;
}

