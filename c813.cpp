#include <iostream>
#include <cstdio>
using namespace std;
int f(int n){
	if(n<10)
		return n;
	else{
		int sum=0;
		while(n!=0){
			sum+=n%10;
			n/=10;
		}
		return f(sum);
	}
}
int main(){
	int n;
	while(cin>>n&&n!=0){
		cout<<f(n)<<endl;
	}
return 0;
}

