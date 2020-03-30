#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
bool prime(int x){
	bool t=true;
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0){
			t=false;
			return false;	
		}
		if(t)
			return true;
}
int main(){
	int a,b;
	while(cin>>a>>b){
		int times=0;
		for(int i=a;i<=b;i++){
			if(i==1)
				continue;
			else if(prime(i)){
				times++;	
			}
		}
		cout<<times<<endl;
	}
	
return 0;
}

