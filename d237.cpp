#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
int prime(int x){
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0){
			return 0;
			break;
		}
	return x;
}
using namespace std;
int main(){
	long long int sum=0;
	for(int i=2;i<=2000000;i++){
		sum+=prime(i);
	}
	cout<<sum;
return 0;
}

