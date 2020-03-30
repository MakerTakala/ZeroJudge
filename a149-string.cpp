#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char n[11];
		int sum=1;
		cin>>n;
		for(int i=0;i<strlen(n);i++)
			sum*=(int)n[i]-48;
		cout<<sum<<endl;
	}
return 0;
}

