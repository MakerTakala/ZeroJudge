#include <iostream>
#include <cstdlib>
using namespace std;
int f91(int n){
	if(n<=100)
		return f91(f91(n+11));
	else
		return n-10;
}
int main(){
	int n;
	while(cin>>n){
		if(n!=0)
			printf("f91(%d) = %d\n",n,f91(n));
		else
			break;
	}
}